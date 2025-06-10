# ESP32 Preferences Initialization for Morse Code System

## Overview
This script initializes and stores essential Morse code timing parameters in **non-volatile memory** using the Preferences library on ESP32. By running this setup before the main Morse transmission code, the system ensures all necessary settings persist across restarts, eliminating the need for manual reconfiguration.

## Features
- Stores **relay control states** (`ON`, `OFF`) for Morse signal transmission.
- Saves **timing values** for dots, dashes, character gaps, and inter-symbol spacing.
- Defines **default test inputs** to be retrieved in the main program.
- Ensures Morse code settings remain consistent even after a device reboot.

## How It Works
1. The ESP32 initializes a **Preferences namespace** (`my-app`).
2. All Morse timing and input parameters are stored in non-volatile memory.
3. The program retrieves and prints stored values for verification.
4. After initialization, the main Morse transmission code can access these stored values.

## Key Variables
- `dot`, `dash` – Morse code pulse durations.
- `gap_bdd`, `space_bc`, `space_bb` – Time gaps between signals.
- `test_input_1`, `test_input_2` – Default test messages.
- `total_time` – Configurable total duration for transmission.
