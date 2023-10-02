#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char matrix[N][N];
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            scanf(" %c", &matrix[i][j]);

    char S[N+1];
    scanf("%s", S);

    for(int i=0; i<N; i++) {
        char row[N+1];
        for(int j=0; j<N; j++)
            row[j] = matrix[i][j];
        row[N] = '\0';

        if(strcmp(row, S) == 0)
            printf("%d\n", i+1);
    }

    return 0;
}
