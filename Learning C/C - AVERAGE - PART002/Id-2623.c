#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d%d", &N, &M);
    char st[6];
    scanf("%s", st);

    int on_time = 0;
    int h, mi;
    sscanf(st, "%d:%d", &h, &mi);
    int ct = h * 60 + mi;

    for (int i = 0; i < N; i++)
    {
        char at[6];
        scanf("%s", at);

        int h, mi;
        sscanf(at, "%d:%d", &h, &mi);

        int am = h * 60 + mi;

        if (am <= ct)
            on_time++;
    }

    if (on_time >= M)
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
