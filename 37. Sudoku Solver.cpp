class Solution {
public:
    bool isPossible(vector<vector<char>>& board, int row, int col, char digit) {
        // horizontal
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == digit) {
                return false;
            }
        }
        // vertical
        for (int j = 0; j < 9; j++) {
            if (board[j][col] == digit) {
                return false;
            }
        }
        // grid
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;
        for (int i = srow; i <= srow + 2; i++) {
            for (int j = scol; j <= scol + 2; j++) {
                if (board[i][j] == digit) {
                    return false;
                }
            }
        }
        return true;
    }
    bool ss(vector<vector<char>>& board, int row, int col) {
        if (row == 9) {
            return true;
        }
        int nextrow = row, nextcol = col + 1;
        if (nextcol == 9) {
            nextrow = row + 1;
            nextcol = 0;
        }

        if (board[row][col] != '.') {
            return ss(board, nextrow, nextcol);
        }

        for (char digit = '1'; digit <= '9'; digit++) {
            if (isPossible(board, row, col, digit)) {
                board[row][col] = digit;
                if (ss(board, nextrow, nextcol)) {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) { 
        ss(board, 0, 0); 
    }
};