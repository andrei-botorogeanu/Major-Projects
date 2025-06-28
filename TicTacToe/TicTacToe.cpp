#include <iostream>

using namespace std;

class TicTacToe {

    private:
      //data private
    char board[ 3 ][ 3 ],

        currentPlayer; //X ,0, X, 0

    void initBoard() {

        for(int i = 0; i < 3; ++i) {

            for(int j = 0; j < 3; ++j) {

                board[i][j] = '-';
            }
        }
    }

    void displayBoard() {

        cout << "  0 1 2\n";
        for(int i = 0; i < 3; ++i) {

            cout << i << " ";

            for(int j = 0; j < 3; ++j) {

                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
    }

    bool isValidMove(int row, int col) {

        if(row < 0 || row > 2 || col < 0 || col > 2) return false;

        return board[row][col] == '-';
    }

    bool isBoardFull() {

        for(int i = 0; i < 3; ++i) {

            for(int j = 0; j < 3; ++j) {

                if(board[i][j] == '-') return false;
            }
        }
        return true;
    }

    bool hasWon() {

        // verificare pe linii:
        for(int i = 0; i < 3; ++i) {

            if(board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) return true;
        }

        // verificare pe coloana
        for(int j = 0; j < 3; ++j) {

            if(board[0][j] == currentPlayer && board[1][j] == currentPlayer && board[2][j] == currentPlayer) return true;
        }

        // verificare pe cele doua diagonale
        if(board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) return true;

        if(board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) return true;

        return false;
    }

    public:

    // constructorul clasei
    TicTacToe() {
        currentPlayer = 'X';
        initBoard();
    }

    void playGame() {

        bool gameFinished = false;

        int row, col;

        while(!gameFinished) {

            displayBoard();

            cout << "Jucator " << currentPlayer << ", introduceti linia (0 - 2) si coloana (0 - 2): ";
            cin >> row >> col;

            // daca este valida mutarea
            if(isValidMove(row, col)) {

                board[ row ][ col ] = currentPlayer;

                if( hasWon() ) {
                    
                    displayBoard();
                    cout << "Jucatorul " << currentPlayer << " a castigat!\n";
                    gameFinished = true;

                } else if(isBoardFull()) {
                    
                    displayBoard();
                    cout << "Joc la egalitate!";
                    gameFinished = true;

                } else {
                    currentPlayer = (currentPlayer == 'X') ? '0' : 'X';
                }
            
            } else {
                cout << "Mutare invalida! Incearca din nou sa muti!";
            }
        }
    }
};

int main(int argc, char const *argv[]) {

  TicTacToe game;

  game.playGame();

  return 0;
}
