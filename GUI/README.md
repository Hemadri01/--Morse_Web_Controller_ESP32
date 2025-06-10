# ESP32 Morse Code Generator Web Interface (Partial Release)

## Overview
This repository contains the **login page, input page, main output page, and test input/output page** for the ESP32 Morse Code Generator project. The full project includes additional features that remain private. This public release showcases the web-based interface that enables users to configure and transmit Morse code efficiently.

## Features
- **Login Page** – Ensures secure access to the settings page.
- **Input Page** – Allows users to enter Morse code messages before transmission.
- **Main Output Page** – Displays real-time Morse transmission with interactive controls.
- **Test Input/Output Page** – Lets users preview Morse output and includes a direct link to the settings page.

## Input System
Since this project was to simulate a Morse Code Reading Exam in a marine training institute the inputs are by default expected to follow the specific exam format.

The system supports **three distinct inputs**:
1. **Test Input** – Allows users to preview Morse output before final transmission.
2. **Type 1 Input** – Contains 60 blocks of only alphabets each containing 5 alphabets.
3. **Type 2 Input** – Contains 8 blocks of both alphabets and numerical characters each of size between 2 and 4 characters.

## How It Works
1. **Login** to access settings and modify transmission speed.
2. **Enter inputs** on the input page (test and/or main input).
3. **Use the test input/output page** to preview Morse signals before transmission. It is possible to access settings from the test page if configuration adjustments are needed.
4. **Transmit final Morse message** on the main output page.
5. **Interact with controls** for start, stop, pause, and resume functionality.

## Notes
- This repository is a **subset** of the original project, ESP32_Morse_Code_Generator_Web.
- Certain backend functionalities and refinements are **not included** in this public version.
- Future improvements may include better UI responsiveness and additional customization options.
