// https://binarysearch.com/problems/Unidirectional-Word-Search (SEE ONCE ....)
class Solution:
    def solve(self, board, word):
        for row in board:
            h = "".join(row)
            if word in h:
                return True
        for col_idx in range(len(board[0])):
            v = "".join(board[r][col_idx] for r in range(len(board)))
            if word in v:
                return True
        return False
            
