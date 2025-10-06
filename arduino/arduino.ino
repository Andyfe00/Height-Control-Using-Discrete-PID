int pinLed = 9;
int entrada=0, out=0;
int TiempoMuestreo = 0.01;       // tiempo de muestreo Se encuentra en milisegundos
unsigned long pasado = 0;     // tiempo pasado (Se hace para asegurar tiempo de muestreo)
unsigned long ahora;
float b1=0, b2=0.007459,b3=0.01492,b4=0.007459, a1=1.6719, a2=-1.014,  a3=0.2231;
float yi1=0, yi2=0 ,yi3=0, yi=0;
float ui=0, ui1=0,ui2=0,ui3=0;
int senal=0,resultado=0;


void setup(){
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
}

void loop(){
  digitalWrite(pinLed, LOW);
  ahora = millis();
   // diferencia de tiempo actual- pasado
  int CambioTiempo = ahora - pasado;

 if (CambioTiempo >= TiempoMuestreo){
  
  if(Serial.available()){  ui=Serial.read(); }
  senal=ui;
  
  yi=(b1*ui)+(b2*ui1)+(b3*ui2)+(b4*ui3)+(a1*yi1)+(a2*yi2)+(a3*yi3);
  // yi=(b2*ui1)+(b3*ui2)+(a1*yi1)+(a2*yi2);
  resultado=  yi;

  digitalWrite(pinLed, HIGH);
 
  ui1=ui;
  ui2=ui1;
  yi1=yi;
  yi2=yi1;
  
 // Serial.print("(");
//  Serial.print(senal); 
   Serial.println(resultado);

 //   Serial.print(")");
delay (50);
  pasado = ahora;
}
}
