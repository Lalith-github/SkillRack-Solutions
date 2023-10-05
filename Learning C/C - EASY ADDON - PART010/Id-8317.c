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

    int fOR = -1, fOC = -1;
    int sOC = -1, sOc = -1;
    
    // Find the first two occurrences of K
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            if(matrix[i][j] == K) {
                if(fOR == -1) {
                    fOR = i;
                    fOC = j;
                } else {
                    sOC = i;
                    sOc = j;
                    break;
                }
            }
        }
        if(sOC != -1) {
            break;
        }
    }

    // Print the sub-matrix
    for(int i = fOR; i <= sOC; i++) {
        for(int j = fOC; j <= sOc; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
