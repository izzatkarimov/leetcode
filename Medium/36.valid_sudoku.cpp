class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Maps to track the characters seen in each row and column.
        unordered_map<int, unordered_set<char>> rows, cols;

        // Map to track the characters seen in each 3x3 sub-grid (square).
        map<pair<int, int>, unordered_set<char>> squares;

        // Iterate through every cell in the board.
        for (int r = 0; r < 9; r++) { // Loop through rows.
            for (int c = 0; c < 9; c++) { // Loop through columns.
                // Skip empty cells (represented by '.').
                if (board[r][c] == '.') continue;

                // Determine which 3x3 sub-grid (square) this cell belongs to.
                pair<int, int> squareKey = {r / 3, c / 3};

                // Check if the current number already exists in the row, column, or sub-grid.
                if (rows[r].count(board[r][c]) || 
                    cols[c].count(board[r][c]) || 
                    squares[squareKey].count(board[r][c])) {
                    return false; // If it does, the Sudoku is invalid.
                }

                // Add the current number to the row, column, and sub-grid trackers.
                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                squares[squareKey].insert(board[r][c]);
            }
        }

        // If no conflicts are found, the Sudoku is valid.
        return true;
    }
};