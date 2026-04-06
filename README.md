<div align="center">

# 🩺 SAPA ECG & Respiratory MATLAB App
### Electronic Stethoscope for Real-Time Heart and Respiratory Signal Acquisition, Filtering, and FFT Analysis

<p>
  <img alt="Platform" src="https://img.shields.io/badge/platform-MATLAB-blue">
  <img alt="Hardware" src="https://img.shields.io/badge/hardware-Arduino%20%7C%20Analog%20Front--End-success">
  <img alt="Focus" src="https://img.shields.io/badge/focus-ECG%20%26%20Respiratory%20Monitoring-orange">
  <img alt="Design" src="https://img.shields.io/badge/design-GUI%20%7C%20PCB%20%7C%203D%20Enclosure-informational">
</p>

<p><b>Biomedical signal acquisition and visualization platform combining analog filtering, MATLAB App Designer, Arduino serial streaming, PCB design, and enclosure development</b></p>

</div>

---

## Overview

This repository contains a biomedical signal monitoring project centered on an **electronic stethoscope** capable of acquiring, filtering, visualizing, and analyzing **heart** and **respiratory** signals in real time.

The project combines:

- **Analog front-end signal conditioning**
- **MATLAB App Designer GUI**
- **Arduino-based data acquisition**
- **FFT-based frequency-domain analysis**
- **PCB design in Altium**
- **3D enclosure design in Fusion 360**

The result is a full-stack engineering project spanning **signal processing, biomedical instrumentation, embedded interfacing, circuit design, and product packaging**.

---

## What this project does

The system is designed to:

- acquire heart and respiratory audio-like physiological signals
- visualize both **raw** and **filtered** waveforms
- compute and display **FFT spectra**
- estimate **BPM**
- allow user-controlled filtering through a GUI
- validate filter behavior using known tone-generator tests
- integrate the signal chain into a PCB and physical enclosure

---

## Repository Contents

```text
.
├── FINAL.mlapp              # MATLAB App Designer GUI
├── arduinocode.ino          # Arduino code for signal acquisition / serial transmission
├── PCB2.PcbDoc              # Altium PCB layout
├── PCB_Sheet1.SchDoc        # Altium schematic
├── SAPA_Project_Box.f3d     # Fusion 360 enclosure design
├── *.svg                    # GUI icons and visual assets
```

---

## Project Architecture

This project is built as a multi-layer biomedical instrumentation system:

### 1) Analog Signal Conditioning
The incoming physiological signal is processed through analog circuitry including:

- **buffer stages**
- **active low-pass filtering**
- **active high-pass filtering**
- **audio amplification**

### 2) Data Acquisition
An **Arduino** is used to acquire analog voltage data and send it to MATLAB over a serial connection.

### 3) MATLAB GUI Processing
The MATLAB app records incoming data, plots the signals, applies filtering options, computes FFTs, and estimates metrics such as BPM.

### 4) Hardware Packaging
The circuit is also transitioned into:

- **PCB implementation**
- **3D enclosure design**

This gives the project a much stronger engineering scope than a software-only demo.

---

## Core Technical Highlights

### MATLAB App Designer GUI
The GUI is the main control panel for the system and supports:

- live waveform display
- raw and filtered signal plotting
- FFT visualization
- filter selection and parameter changes
- BPM output
- real-time monitoring workflow

### Arduino Integration
The report explains that Arduino was used to simplify analog voltage acquisition and deliver data to MATLAB over serial communication, enabling real-time GUI-based processing.

### Analog Filter Design
The analog front end includes Butterworth-inspired filtering stages:

- **Active low-pass filter**
- **Active high-pass filter**
- **Buffer stages between filter blocks**
- **LM386 amplification stage**

### Hardware-to-Software Pipeline
A particularly strong feature of this project is that it does not stop at MATLAB visualization. It connects:

**sensor / transducer → analog conditioning → Arduino → MATLAB GUI → FFT / filtering / analysis**

---

## Signal Processing Features

The system handles both **heart** and **respiratory** signals.

### Heart Signal Analysis
The report explains that the GUI was used to observe raw and filtered heart signals and their FFTs, with the intention of isolating useful content below approximately **100 Hz** using a system sampling frequency of **1390 Hz**.

### Respiratory Signal Analysis
For respiratory monitoring, the GUI was used to analyze raw and filtered respiratory signals with emphasis on the frequency band between **100 Hz and 900 Hz**, again using a sampling rate of **1390 Hz**.

### FFT-Based Interpretation
FFT plots are used as a major diagnostic and validation tool in the interface, helping compare healthy vs abnormal-looking waveform behavior and confirm filter operation.

### BPM Estimation
The MATLAB code also includes BPM estimation logic derived from detected intervals in the acquired signal.

---

## Hardware Design

### Analog Circuit
According to the report, the analog design includes:

- **TL072** for active filtering
- **LM358** as buffer stages
- **LM386** for audio amplification

### Breadboard Prototype
An initial breadboard implementation was used for testing and debugging of the signal chain.

### PCB Design
The project later evolved into a more compact PCB implementation using **Altium Designer**, integrating:

- multiple op-amp stages
- band-pass behavior from approximately **56 Hz to 723 Hz**
- buffering between stages
- final amplification

### Handmade Transducer
The report images also show a handmade transducer assembly used with the PCB version.

---

## Enclosure Design

The project includes a dedicated **Fusion 360** enclosure design.

Highlights from the report:
- overall box dimensions of approximately **170 mm × 170 mm × 80 mm**
- lid-based enclosure structure
- 3D-print-ready design
- dedicated cutouts for connectivity

This makes the repository notable as a complete prototype rather than only a simulation or lab exercise.

---

## Filter Validation

One of the strongest aspects of this project is that the filter behavior was validated using a **frequency tone generator**.

The report presents test cases including:

- low-pass behavior
- high-pass behavior
- band-pass behavior
- band-stop behavior

These controlled tests help verify that the MATLAB filtering and FFT pipeline behaves as intended under known input frequencies.

---

## Why this project stands out

This repository is stronger than a typical signal plotting app because it integrates:

- biomedical instrumentation
- analog filter design
- Arduino serial acquisition
- MATLAB GUI signal analysis
- FFT-based validation
- PCB design
- 3D product enclosure design

That makes it a strong multidisciplinary engineering project at the intersection of:

- biomedical engineering
- electronics
- signal processing
- product prototyping
- MATLAB application development

---

## Typical Workflow

1. Acquire physiological signal through the analog front-end
2. Stream the data through Arduino over serial
3. Receive the signal in MATLAB App Designer
4. Plot raw waveform
5. Apply filter settings
6. Plot filtered waveform
7. Compute FFT
8. Estimate BPM or inspect respiratory characteristics
9. Validate or compare different signal conditions

---

## Main Files

### `FINAL.mlapp`
Main MATLAB App Designer application for signal acquisition, visualization, filtering, FFT, and user interaction.

### `arduinocode.ino`
Arduino-side implementation for data collection and serial transfer to MATLAB.

### `PCB_Sheet1.SchDoc`
Schematic design for the analog and amplification chain.

### `PCB2.PcbDoc`
PCB layout for the compact hardware implementation.

### `SAPA_Project_Box.f3d`
Fusion 360 enclosure design for physical packaging of the device.

---

## Suggested Improvements

This project already has strong scope, but some future improvements could make it even more compelling:

- add screenshots of the MATLAB GUI to the README
- include setup instructions for COM port selection and serial rate
- document the analog front-end signal path more explicitly
- add example datasets for quick GUI testing
- include screenshots of FFT outputs for heart and respiratory modes
- add a short demo video or GIF
- include filter parameter presets for heart vs respiratory analysis
- add abnormal-signal benchmarks if clinically sourced data is available

---

## Learning and Research Value

This repository is useful for learners and researchers interested in:

- biomedical signal processing
- MATLAB App Designer development
- ECG / heart sound / respiratory signal visualization
- analog filter design
- FFT-based frequency analysis
- Arduino to MATLAB serial data pipelines
- PCB and enclosure co-design

It can serve as a foundation for:
- biomedical instrumentation coursework
- signal processing projects
- electronic stethoscope prototyping
- rapid healthcare interface development

---

## Authors

- **Oğuzhan Alasulu**
- **Serkan Kıyaklı**
- **Aliye Birgül**

GitHub repository owner: [@alasulu](https://github.com/alasulu)

---

## Suggested Citation

```bibtex
@misc{alasulu_sapa_ecg_respiratory_app,
  author       = {Oğuzhan Alasulu and Serkan Kıyaklı and Aliye Birgül},
  title        = {SAPA ECG and Respiratory MATLAB App},
  year         = {2026},
  howpublished = {\url{https://github.com/alasulu/SAPA-ECG-Respitory-MATLAB-App}}
}
```

---

## Final Note

> This project is a strong example of end-to-end biomedical engineering: from analog filtering and acquisition hardware to real-time MATLAB visualization, FFT analysis, PCB realization, and enclosure design.
