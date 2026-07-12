#include <bits/stdc++.h>
using namespace std;

// Function to check if it's safe to place a Queen at (i, j)
bool check(int n, vector<string> &board, int i, int j) {
    int row = i;
    int col = j;

    // Check upper left diagonal
    while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q') return false;
        row--;
        col--;
    }

    // Check upper right diagonal
    row = i;
    col = j;
    while (row >= 0 && col < n) {
        if (board[row][col] == 'Q') return false;
        row--;
        col++;
    }

    // Position is safe
    return true;
}

// Recursive function to find all valid Queen placements
void find(int n, int row, vector<vector<string>> &ans, vector<string> &board, vector<bool> &column) {
    // Base case: all rows filled successfully
    if (row == n) {
        ans.push_back(board);
        return;
    }

    // Try placing a Queen in each column of this row
    for (int j = 0; j < n; j++) {
        // Place only if column is free and diagonals are safe
        if (!column[j] && check(n, board, row, j)) {
            column[j] = true;
            board[row][j] = 'Q';
            find(n, row + 1, ans, board, column);
            // Backtrack: remove Queen and reset
            column[j] = false;
            board[row][j] = '.';
        }
    }
}

// Function to solve N-Queens problem
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n, string(n, '.')); // n×n board filled with '.'
    vector<bool> column(n, false);           // column tracker
    find(n, 0, ans, board, column);
    return ans;
}

// -------------------- MAIN FUNCTION --------------------
int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    vector<vector<string>> res = solveNQueens(n);

    cout << "\nNumber of solutions: " << res.size() << "\n\n";

    for (int i = 0; i < res.size(); i++) {
        cout << "Solution " << i + 1 << ":\n";
        for (string row : res[i]) {
            cout << row << "\n";
        }
        cout << "\n";
    }

    return 0;
}
