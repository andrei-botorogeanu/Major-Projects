# GTK Notepad

## Overview

A feature-rich, multi-tab text editor built using GTK+ and gtkmm (C++ GTK+ wrapper). This lightweight notepad application provides essential text editing functionalities with an intuitive, user-friendly interface.

## Features

- Multi-tab interface
- File operations:
  - Create new tabs
  - Open existing files
  - Save files
  - Save files with custom name
- Edit functionality:
  - Cut, copy, and paste
  - Font size adjustment
- Automatic scrolling
- Responsive design

## Prerequisites

### Dependencies

- GTK+ 3.0
- gtkmm 3.0
- C++11 or later compiler
- CMake (recommended for building)

### Installation on Ubuntu/Debian

bash
sudo apt-get update
sudo apt-get install libgtkmm-3.0-dev cmake build-essential


### Installation on Fedora

bash
sudo dnf install gtkmm30-devel cmake gcc-c++


## Building the Application

### Using CMake

bash
mkdir build
cd build
cmake ..
make


### Running the Application

bash
./notepad


## Keyboard Shortcuts

- `Ctrl + N`: New Tab
- `Ctrl + O`: Open File
- `Ctrl + S`: Save File
- `Ctrl + Shift + S`: Save File As
- `Ctrl + W`: Close Current Tab
- `Ctrl + Q`: Quit Application
- `Ctrl + +`: Increase Font Size
- `Ctrl + -`: Decrease Font Size

## Project Structure

- `main.cpp`: Main application entry point
- `NotepadWindow`: Primary window class managing tabs and menu
- `TabPage`: Individual tab management class

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

Distributed under the MIT License. See `LICENSE` for more information.

## Contact

Andrei Botorogeanu - andreibotorogeanu77@gmail.com

Project Link: https://github.com/andrei-botorogeanu/Major-Projects
