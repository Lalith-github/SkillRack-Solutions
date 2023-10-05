#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, c, c1, sum = 0;
    scanf("%d", &N);
    int array[N][N];
    for (c = 1; c <= N; c++)
    {
        for (c1 = 1; c1 <= N; c1++)
        {
            scanf("%d", &array[c][c1]);
        }
    }
    for (c = 1; c <= N; c++)
    {
        for (c1 = 1; c1 <= N; c1++)
        {
            if ((c == 1 && c1 == 1) || (c == 1 && c1 == N) || (c == N && c1 == 1) || (c == N && c1 == N))
            {
                sum = sum + array[c][c1];
            }
        }
    }
    printf("%d", sum);
}
// Input:
// 3
// 10 90 1
// 4  22 5
// 32 8 66

// Output:
// 109

// Explanation:
// The sum = 10+1+66+32 =  109