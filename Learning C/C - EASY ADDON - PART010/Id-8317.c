#include <stdio.h>

int main() {
    int R, C, K;
    scanf("%d %d %d", &R, &C, &K);

    int matrix[R][C];

    // Input the matrix
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int firstOccurrenceRow = -1, firstOccurrenceCol = -1;
    int secondOccurrenceRow = -1, secondOccurrenceCol = -1;
    
    // Find the first two occurrences of K
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(matrix[i][j] == K) {
                if(firstOccurrenceRow == -1) {
                    firstOccurrenceRow = i;
                    firstOccurrenceCol = j;
                } else {
                    secondOccurrenceRow = i;
                    secondOccurrenceCol = j;
                    break;
                }
            }
        }
        if(secondOccurrenceRow != -1) {
            break;
        }
    }

    // Print the sub-matrix
    for(int i = firstOccurrenceRow; i <= secondOccurrenceRow; i++) {
        for(int j = firstOccurrenceCol; j <= secondOccurrenceCol; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
