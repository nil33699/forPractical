#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };

    int sumDiagonal1 = 0, sumDiagonal2 = 0;

    // Calculate the sum of the primary diagonal
    for (int i = 0; i < 3; i++) {
        sumDiagonal1 += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal
    for (int i = 0; i < 3; i++) {
        sumDiagonal2 += matrix[i][2 - i];
    }

    // If the diagonals are not equal, it's not a magic square
    if (sumDiagonal1 != sumDiagonal2) {
        printf("The matrix is not a magic square.\n");
        return 0;
    }

    int sumRow, sumCol;

    // Check if all rows and columns have the same sum as the diagonals
    for (int i = 0; i < 3; i++) {
        sumRow = 0;
        sumCol = 0;

        for (int j = 0; j < 3; j++) {
            sumRow += matrix[i][j];  // Sum of the current row
            sumCol += matrix[j][i];  // Sum of the current column
        }

        if (sumRow != sumDiagonal1 || sumCol != sumDiagonal1) {
            printf("The matrix is not a magic square.\n");
            return 0;
        }
    }

    printf("The matrix is a magic square.\n");

    return 0;
}
