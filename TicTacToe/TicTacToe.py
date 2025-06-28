class TicTacToe:
    #constructorul clasei
    def __init__(self):
        self.board = [['-' for _ in range(3)] for _ in range(3)]
        self.currentPlayer = 'X';

    def display_board(self):
        print("  0 1 2")
        for i in range(3):
            print(f"{i} {' '.join(self.board[i])}")

    # row = 3
    # col = 7
    #not false = true
    # is_valid(self, 3, 7)

    # facem pentru o mutare valida
    # row = 1
    # col = 1
    def is_valid_move(self, row, col):

#                   3                 7
        if not(0 <= row <= 2 and 0 <= col <= 2):
            # TRUE
            #
            # not TRUE = FALSE
            return False

        return self.board[row][col] == '-'#daca in celula respectiva se afla '-', atunci mutarea este valida
        # altfel returneaza False

    def has_won(self):

        # verificare pe linii
        for row in self.board:
            if row.count(self.currentPlayer) == 3:
                return True

        # verificare pe coloane
        for col in range( 3 ):
            if all(self.board[row][col] == self.currentPlayer for row in range(3)):
                return True

        # verificare pe diagonala principala
        if all(self.board[i][i] == self.currentPlayer for i in range( 3 )):
            return True

        # verificare pe diagonala secundara
        #i = 0, 2
        if all(self.board[i][2-i] == self.currentPlayer for i in range(3)):
            return True

    def is_board_full(self):
        return all(cell != '-' for row in self.board for cell in row)

    def playGame(self):

        gameFinished = False

        while not gameFinished:

            self.display_board()

            print(f"Jucator {self.currentPlayer}, introduceti linia (0-2) si coloana (0-2):")

            try:
                row = int(input("Linia: "))
                col = int(input("Coloana: "))

            except ValueError:
                print("Introduceti numere valide")
                continue

            if self.is_valid_move(row, col):
                self.board[row][col] = self.currentPlayer

                if self.has_won():
                    self.display_board()
                    print(f"Jucatorul {self.currentPlayer} a castigat!")
                    gameFinished = True
                elif self.is_board_full():
                    self.display_board()
                    print("Joc la egalitate!")
                    gameFinished = True
                else:
                    self.currentPlayer = '0' if self.currentPlayer == 'X' else 'X'
            else:
                print("Mutare invalida! Incearca din nou sa muti!")

if __name__ == "__main__":
    game = TicTacToe()
    game.playGame();
