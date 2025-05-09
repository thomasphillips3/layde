# ⏱️ JUCE Delay Plugin

This project is a feature-rich stereo delay effect built using **JUCE** and **C++**, following the structure and teachings from _The Complete Beginner’s Guide to Audio Plug-In Development_ by Matthijs Hollemans.

## 🎧 Overview

This plugin takes incoming audio and repeats it after a specified amount of time, creating echo and ambiance. It’s ideal for adding depth and interest to vocals, synths, drums, or any other sound source. Built with real-time performance and modern UI/UX in mind, it supports common plugin formats (VST3, AU) and can run in most major DAWs.

## ✨ Features

- Configurable **delay time** (5 ms to 5 sec) with optional **tempo sync**
- **Feedback control** with optional low-pass and high-pass filters
- **Ping-pong delay** with stereo width control
- **Dry/Wet mix** and **Output gain** controls
- **Real-time level metering**
- **Bypass switch**
- Designed with performance, usability, and aesthetics in mind

## 🚧 Development Status

The project is actively in development and follows a milestone-driven roadmap. See the [Milestone Schedule](delay_plugin_milestones.md) for details.

## 🛠️ Tech Stack

- **JUCE** (v7+) for audio DSP and cross-platform UI
- **C++** for real-time audio processing
- **Xcode** / **Visual Studio** for plugin development and build
- **AudioPluginHost** and **pluginval** for testing and validation

## 📦 Plugin Formats

- ✅ VST3
- ✅ Audio Unit (AU)
- ⏳ AAX (planned)
- ⏳ LV2 (optional)

## 📂 Project Structure

```bash
Delay/
├── Builds/              # Platform-specific build files (Xcode, VS)
├── Source/              # Main C++ source code
│   ├── PluginProcessor.cpp/.h
│   ├── PluginEditor.cpp/.h
│   └── Parameters.cpp/.h
├── JuceLibraryCode/     # Auto-generated JUCE wrapper code
├── Delay.jucer          # JUCE project file
└── README.md
```

## 📘 Based On

This plugin follows the structure of the delay plugin tutorial in:
> _The Complete Beginner’s Guide to Audio Plug-In Development_ by Matthijs Hollemans  
> [Get the book](https://www.theaudioprogrammer.com)

## 🧪 Testing

- Use JUCE’s **AudioPluginHost** or a DAW like Logic, REAPER, Ableton
- Run `pluginval` to validate formats and behavior

## 📖 License

MIT License. See `LICENSE` file for details.

## 💬 Feedback & Contributions

Pull requests and issues welcome. This project is part of a personal DSP learning journey and may expand into commercial-quality tools later on.

---

Built with ❤️ and delay lines.
