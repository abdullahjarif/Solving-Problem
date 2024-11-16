#include<bits/stdc++.h>
using namespace std;

int maxBorder(vector<vector<char>>& grid, int rows, int cols) {
    int maxRowBorder = 0;
    int maxColBorder = 0;

    for (int i = 0; i < rows; i++) {
        int currentRowBorder = 0;
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == '#') {
                currentRowBorder++;
            } else {
                maxRowBorder = max(maxRowBorder, currentRowBorder);
                currentRowBorder = 0;
            }
        }
        maxRowBorder = max(maxRowBorder, currentRowBorder);
    }

    for (int j = 0; j < cols; j++) {
        int currentColBorder = 0;
        for (int i = 0; i < rows; i++) {
            if (grid[i][j] == '#') {
                currentColBorder++;
            } else {
                maxColBorder = max(maxColBorder, currentColBorder);
                currentColBorder = 0;
            }
        }
        maxColBorder = max(maxColBorder, currentColBorder);
    }

    return max(maxRowBorder, maxColBorder);
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int rows, cols;
        cin >> rows >> cols;

        vector<vector<char>> grid(rows, vector<char>(cols));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> grid[i][j];
            }
        }

        int result = maxBorder(grid, rows, cols);
        cout << result << endl;
    }

    return 0;
}
