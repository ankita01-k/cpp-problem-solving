#include <iostream>
using namespace std;

int board[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
};

int tries = 0; 

void printBoard() {
    for (int r = 0; r < 9; r++) {
        if (r % 3 == 0 && r != 0) cout << "------+-------+------\n";
        for (int c = 0; c < 9; c++) {
            if (c % 3 == 0 && c != 0) cout << "| ";
            cout << board[r][c] << " ";
        }
        cout << "\n";
    }
}


bool isSafe(int row, int col, int num) {
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == num) return false; // same row
        if (board[i][col] == num) return false; // same column
    }
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[startRow + i][startCol + j] == num) return false; 
    return true;
}

// Backtracking: fill the first empty square, try 1 to 9, undo if stuck
bool solve() {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (isSafe(row, col, num)) {
                        board[row][col] = num;   // try it
                        tries++;
                        if (solve()) return true; // keep going
                        board[row][col] = 0;     // it failed later, undo (backtrack)
                    }
                }
                return false; // no number fits here, so go back
            }
        }
    }
    return true; // no empty squares left, solved
}

int main() {
    cout << "Puzzle:\n";
    printBoard();

    if (solve()) {
        cout << "\nSolved:\n";
        printBoard();
        cout << "\nNumbers tried: " << tries << "\n";
    } else {
        cout << "\nNo solution exists.\n";
    }
    return 0;
} 