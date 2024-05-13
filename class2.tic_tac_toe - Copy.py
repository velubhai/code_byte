print("======xxxxxxxx=Tic-Tac-Toe=xxxxxxxxx======= ")
class Gamestate():
    def __init__(self):
        self.board = [[' 'for _ in range(3)]for _ in range(3)]

    def print_board(self):
        for row in self.board:
            print('|'.join(row))
            print('_ _ _ _')
        print()

    def make_move(self,move,player):
        row,col = move
        self.board[row][col]= player

game = Gamestate()
game.print_board()
row,col = map(int,input("Enter row and colums for O:").split())
game.make_move((row,col),'O')
game.print_board()


row,col = map(int,input("Enter row and colums for X:").split())
game.make_move((row,col),'X')
game.print_board()

row,col = map(int,input("Enter row and colums for O:").split())
game.make_move((row,col),'O')
game.print_board()
            
row,col = map(int,input("Enter row and colums for X:").split())
game.make_move((row,col),'X')
game.print_board()

row,col = map(int,input("Enter row and colums for O:").split())
game.make_move((row,col),'O')
game.print_board()

row,col = map(int,input("Enter row and colums for X:").split())
game.make_move((row,col),'X')
game.print_board()

row,col = map(int,input("Enter row and colums for O:").split())
game.make_move((row,col),'O')
game.print_board()

row,col = map(int,input("Enter row and colums for X:").split())
game.make_move((row,col),'X')
game.print_board()

row,col = map(int,input("Enter row and colums for O:").split())
game.make_move((row,col),'O')
game.print_board()
