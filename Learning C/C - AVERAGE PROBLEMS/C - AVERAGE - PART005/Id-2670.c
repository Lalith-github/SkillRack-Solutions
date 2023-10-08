#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int current = 1;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N-i; j++) {
            printf("%d ", current);
            current += i + j + 2;
        }
        printf("\n");
        current = i + 2;
    }

    return 0;
}
