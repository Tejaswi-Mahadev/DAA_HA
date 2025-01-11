class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solutions;
        vector<string> board(n, string(n, '.')); 
        unordered_set<int> col, diag1, diag2; 
        backtrack(0, n, board, col, diag1, diag2, solutions);
        return solutions;
    }

private:
    void backtrack(int row, int n, vector<string>& board, 
                   unordered_set<int>& col, unordered_set<int>& diag1, unordered_set<int>& diag2, 
                   vector<vector<string>>& solutions) {
        if (row == n) {
            solutions.push_back(board); 
            return;
        }

        for (int c = 0; c < n; c++) {
            if (col.count(c) || diag1.count(row - c) || diag2.count(row + c)) 
                continue;
            board[row][c] = 'Q';
            col.insert(c);
            diag1.insert(row - c);
            diag2.insert(row + c);
            backtrack(row + 1, n, board, col, diag1, diag2, solutions);
            board[row][c] = '.';
            col.erase(c);
            diag1.erase(row - c);
            diag2.erase(row + c);
        }
    }
};
