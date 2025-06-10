# Morse_Web_Controller_ESP32

## This repository contains a public subset of the full project, ESP32_Morse_Code_Generator_Web. Some features and refinements are available in the private version but are not included here.

# Morse Code Automation System (ESP32 & FreeRTOS)

## Overview
This project is an automated Morse code transmission system designed to simplify message generation using an ESP32 microcontroller. Originally developed on Arduino, the system was later enhanced with ESP32 to allow wireless control via a web-based interface. The project was inspired by real-world usage in marine training exercises, helping streamline Morse code practice.

## Features
- **Web-Based Control** – Connect to the ESP32 AP and interact via a simple web interface.
- **Login System** – Secure access to settings and input pages.
- **Customizable Morse Transmission** – Adjustable timing for dots and dashes.
- **Two-Step Input System** – Test output before final transmission.
- **Start/Stop/Pause/Resume Controls** – Full control over Morse code playback.
- **FreeRTOS Multitasking** – Ensures relay control while maintaining Wi-Fi connection.
- **Buffer Sequences** – Supports marine-style message formatting for structured outputs.

## How It Works
1. **Connect** to the ESP32 access point via a phone or laptop.
2. **Access the web interface** at `192.168.4.1` (login required for settings).
3. **Input your message** and preview test output.
4. **Control transmission** with interactive buttons.
5. **Finalize the Morse output**, then shut down or re-enter a new message.

## Technical Details
- ESP32 runs as an **access point** without internet connectivity.
- Web interface built using **AsyncWebServer** for non-blocking interactions.
- **FreeRTOS** used to separate relay control and Wi-Fi processing.
- Relay toggles based on Morse timing standards with configurable delays.
- **Captive portal** planned for smoother user experience (not yet implemented).

## Future Improvements
- Solving **Guru Meditation Error** issues in some edge cases.
- Implementing captive portal for seamless connection.
- Enhancing web UI responsiveness.
