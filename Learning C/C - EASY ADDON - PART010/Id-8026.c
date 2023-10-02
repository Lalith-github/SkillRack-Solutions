#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int matrix[N][N];

    // Input the matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the modified matrix
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if (j >= N - i) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
