# Tic Tac Toe Game in C++

A simple console-based Tic Tac Toe game implementation in C++ using object-oriented programming principles.

**Author:** Andrei Botorogeanu

## Overview

This is a classic 3x3 Tic Tac Toe game where two players alternate turns placing their marks (X and O) on a grid. The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins the game.

## Features

- Two-player gameplay (X vs O)
- Input validation for moves
- Win detection (rows, columns, diagonals)
- Draw detection when board is full
- Clear board display with coordinates
- Romanian language interface

## Game Rules

1. The game is played on a 3x3 grid
2. Player X always goes first
3. Players alternate turns placing their mark in an empty cell
4. First player to get 3 marks in a row (horizontally, vertically, or diagonally) wins
5. If all 9 cells are filled without a winner, the game ends in a draw

## How to Compile and Run

### Prerequisites
- C++ compiler (g++, clang++, or similar)
- C++11 or later standard support

### Compilation
```bash
g++ -o tictactoe tictactoe.cpp
```

### Running the Game
```bash
./tictactoe
```

## How to Play

1. The game displays the current board state with row and column indices
2. When prompted, enter your move as two numbers:
   - First number: row (0-2)
   - Second number: column (0-2)
3. The game validates your move and updates the board
4. Continue until someone wins or the board is full

### Example Gameplay
```
  0 1 2
0 - - -
1 - - -
2 - - -
Jucator X, introduceti linia (0 - 2) si coloana (0 - 2): 1 1

  0 1 2
0 - - -
1 - X -
2 - - -
Jucator 0, introduceti linia (0 - 2) si coloana (0 - 2): 0 0
```

## Code Structure

### Class: `TicTacToe`

#### Private Members
- `char board[3][3]` - 3x3 game board array
- `char currentPlayer` - Current player ('X' or '0')

#### Private Methods
- `initBoard()` - Initializes the board with empty cells ('-')
- `displayBoard()` - Displays the current board state with coordinates
- `isValidMove(int row, int col)` - Validates if a move is legal
- `isBoardFull()` - Checks if the board is completely filled
- `hasWon()` - Checks if the current player has won

#### Public Methods
- `TicTacToe()` - Constructor that initializes the game
- `playGame()` - Main game loop that handles player input and game flow

## Game Logic

### Win Conditions
The game checks for wins in the following patterns:
- **Rows**: Three identical marks in any horizontal row
- **Columns**: Three identical marks in any vertical column  
- **Diagonals**: Three identical marks in either diagonal (top-left to bottom-right or top-right to bottom-left)

### Input Validation
- Coordinates must be within the 0-2 range for both row and column
- The selected cell must be empty (contain '-')
- Invalid moves prompt the player to try again

### Game Flow
1. Initialize board and set first player to 'X'
2. Display current board state
3. Prompt current player for move coordinates
4. Validate the move
5. If valid: place mark, check for win/draw, switch players
6. If invalid: display error message and repeat step 3
7. Continue until game ends (win or draw)

## Technical Details

- **Language**: C++
- **Standard**: C++11 compatible
- **Memory**: Uses stack-allocated 2D array for the board
- **Input/Output**: Console-based using `iostream`
- **Architecture**: Single class design with encapsulated game logic

## Possible Enhancements

- Add AI opponent with different difficulty levels
- Implement score tracking across multiple games
- Add GUI interface using a graphics library
- Support for different board sizes (4x4, 5x5, etc.)
- Save/load game state functionality
- Network multiplayer support
- English language option

## License

MIT

