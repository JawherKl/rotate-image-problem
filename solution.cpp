#include <vector>
#include <iostream>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix1 = {{1, 2, 3}, 
                                   {4, 5, 6}, 
                                   {7, 8, 9}};
    rotate(matrix1);
    for (const auto& row : matrix1) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    vector<vector<int>> matrix2 = {{5, 1, 9, 11}, 
                                   {2, 4, 8, 10}, 
                                   {13, 3, 6, 7}, 
                                   {15, 14, 12, 16}};
    rotate(matrix2);
    for (const auto& row : matrix2) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
