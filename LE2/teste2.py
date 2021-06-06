def issafe(q, board, x=1):
    if not board: return True
    if board[-1] in [q+x,q-x]: return False
    return issafe(q, board[:-1], x+1)
    
def solve(boardsize, board=[], solutions_found=0):
    if len(board) == boardsize:
        solutions_found += 1
        #display(solutions_found, board)
    else:
        for q in [col for col in range(1,boardsize+1) if col not in board]:
            if issafe(q,board):
                solutions_found = solve(boardsize, board + [q], solutions_found)
    return solutions_found

print(solve(8))