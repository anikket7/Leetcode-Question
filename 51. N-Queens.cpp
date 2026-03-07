class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, int n) {
        // horizontal check
        for (int i = 0; i < n; i++) {
            if (board[row][i] == 'Q') {
                return false;
            }
        }
        // vertical check
        for (int j = 0; j < n; j++) {
            if (board[j][col] == 'Q') {
                return false;
            }
        }
        // left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        // right diagonal
        for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }
    void nQueen(vector<string>& board, int row, int n,
                vector<vector<string>>& ans) {
        if (row == n) {
            ans.push_back({board});
            return;
        }
        for (int col = 0; col < n; col++) {
            if (isSafe(board, row, col, n)) {
                board[row][col] = 'Q';
                nQueen(board, row + 1, n, ans);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;
        nQueen(board, 0, n, ans);
        return ans;
    }
};