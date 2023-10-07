#include <stdio.h>

int main()
{
    int L1, L2;
    scanf("%d%d", &L1, &L2);
    int arr1[50], arr2[50];
    for (int i = 0; i < L1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < L2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int dc = 0;

    for (int i = 0; i < L1; i++)
    {
        int flag = 0;
        for (int j = 0; j < L2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            dc++;
        }
    }

    for (int i = 0; i < L2; i++)
    {
        int flag = 0;
        for (int j = 0; j < L1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            dc++;
        }
    }

    printf("%d\n", dc);

    return 0;
}
