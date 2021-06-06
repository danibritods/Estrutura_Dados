def Issafe(queen, queens_in_board):
    x = len(queens_in_board)
    q = queen
    for col in queens_in_board:
        if col in [q+x,q-x]: return False
        x -= 1
    return True


solucoes = []
queens_in_board = []
for queen in [col for col in range(1,8+1) if col not in queens_in_board]:
    for queen2 in [col for col in range(1,8+1) if col not in queens_in_board]:
        if len(queens_in_board) == 8:
            print("Soluão!!! nº {}".format(len(solucoes)))
            queens_in_board = []
        elif Issafe(queen2,queens_in_board):
            queens_in_board.append(queen)




