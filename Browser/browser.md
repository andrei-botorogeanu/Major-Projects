# Simple Qt Browser

## Overview

Simple Qt Browser is a lightweight web browser application built using Python 3 and PyQt5. It provides a simple, tabbed browsing experience with essential navigation features.

## Features

- Multiple tab support
- Navigation buttons (Back, Forward, Reload)
- URL bar with 'Go' button
- New tab functionality
- Progress bar for page loading
- Automatic tab title updating

## Prerequisites

Before running the application, ensure you have the following installed:

### Python
- Python 3.7 or higher

### Required Libraries
- PyQt5
- PyQtWebEngine

### Installation

1. Clone the repository:
   bash
   git clone https://github.com/yourusername/simple-qt-browser.git
   cd simple-qt-browser
   

2. Create a virtual environment (optional but recommended):
   bash
   python3 -m venv venv
   source venv/bin/activate  # On Windows, use `venv\Scripts\activate`
   

3. Install dependencies:
   bash
   pip install PyQt5 PyQtWebEngine
   

## Running the Application

bash
python simple_browser.py


## Usage

- **New Tab**: Click the 'New Tab' button or use Ctrl+T (standard browser shortcut)
- **Navigate**: 
  - Enter a URL in the address bar and press Enter or click 'Go'
  - URLs without a scheme (http:// or https://) will default to http://
- **Navigation**: 
  - Use back (←) and forward (→) buttons to navigate browsing history
  - Use reload (↻) button to refresh the current page
- **Close Tab**: Click the 'x' on any tab (always keep at least one tab open)

## Customization

You can easily modify the default homepage by changing the URL in the `add_new_tab()` method. Currently set to 'http://www.bing.com'.

## Known Limitations

- Basic browser functionality
- No advanced features like bookmarks or private browsing
- Limited error handling

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

MIT License

## Author

Andrei Botorogeanu

## Screenshots



## Troubleshooting

- Ensure all dependencies are correctly installed
- Check Python and PyQt5 versions for compatibility
- Verify your system meets the minimum requirements

## Future Improvements

- Add bookmarks
- Implement download manager
- Enhance error handling
- Add private browsing mode
