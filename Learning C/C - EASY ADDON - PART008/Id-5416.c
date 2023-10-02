#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            scanf("%d", &matrix[i][j]);

    // Sort the corner elements in clockwise order
    if(matrix[0][0] > matrix[0][C-1]) swap(&matrix[0][0], &matrix[0][C-1]);
    if(matrix[0][0] > matrix[R-1][C-1]) swap(&matrix[0][0], &matrix[R-1][C-1]);
    if(matrix[0][0] > matrix[R-1][0]) swap(&matrix[0][0], &matrix[R-1][0]);
    
    if(matrix[0][C-1] > matrix[R-1][C-1]) swap(&matrix[0][C-1], &matrix[R-1][C-1]);
    if(matrix[0][C-1] > matrix[R-1][0]) swap(&matrix[0][C-1], &matrix[R-1][0]);
    
    if(matrix[R-1][C-1] > matrix[R-1][0]) swap(&matrix[R-1][C-1], &matrix[R-1][0]);

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}