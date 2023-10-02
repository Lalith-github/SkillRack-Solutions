#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];

    // Input the matrix
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxSum = 0;
    int maxCol = -1;

    // Calculate the sum of each column and find the column with maximum sum
    for(int j = 0; j < C; j++) {
        int sum = 0;
        for(int i = 0; i < R; i++) {
            sum += matrix[i][j];
        }
        if (sum >= maxSum) {
            maxSum = sum;
            maxCol = j;
        }
    }

    // Print the modified matrix without the column with maximum sum
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if (j != maxCol) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
