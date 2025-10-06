# Height-Control-Using-Discrete-PID

This project implements the **height control of a hydraulic system** using a **discrete PID controller**, modeled and simulated in **MATLAB/Simulink**, implemented in **LabVIEW**, and validated on a **microcontroller (Arduino)**.

---

## 🧠 Overview

The objective of this work was to **design and simulate a DC motor speed control system** capable of following **step** and **ramp** reference signals while considering real-world **saturation effects** (voltage, current, and maximum speed).

The project consists of three main parts:
1. **Mathematical modeling** of the hydraulic system.
2. **Design and discretization of a PID controller** using MATLAB/Simulink.
3. **Hardware implementation** of the discrete controller in LabVIEW with serial communication to Arduino.

---

## ⚙️ Repository Structure

| Folder / File | Description |
|----------------|-------------|
| `Lb_Control.vi` | LabVIEW interface and block diagram |
| `arduino/` | Arduino code implementing the discrete PID controller |
| `Escalon/` | Simulations for the step input response |
| `Rampa/` | Simulations for the ramp input response |

---

## 🧩 Tools and Software

- **MATLAB / Simulink** – System modeling and simulation  
- **LabVIEW** – GUI design and serial communication with Arduino  
- **Arduino IDE** – Programming of the discrete PID controller  
- **NI VISA** – Serial communication driver between LabVIEW and Arduino  

---

## 📈 Key Results

- Continuous and discrete PID controllers designed using **Tustin** and **Euler** methods  
- Verified **reference tracking** for both step and ramp inputs  
- Real-time **controller implementation** on Arduino via LabVIEW  
- Comparison between `s`-domain and `z`-domain responses showing a gain reduction due to discretization  

---

> ⚠️ Academic Disclaimer  
> This project was developed by **Andrés Felipe Porras** and **Lucas Balvin** as part of the  
> control module at **Universidad Militar Nueva Granada (2017–2021)**.  
> The content is shared for educational and portfolio purposes only.  
> No proprietary or restricted university materials are included.

---
