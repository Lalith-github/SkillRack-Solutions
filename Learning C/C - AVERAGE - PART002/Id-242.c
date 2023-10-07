// #include <stdio.h>

// int main()
// {
//     char M[101];
//     int X, Y;
//     fgets(M, 101, stdin);
//     scanf("%d\n%d", &X, &Y);
//     for (int i = 0; M[i] != '\0'; i++)
//     {
//         if (M[i] >= 'a' && M[i] <= 'z')
//         {
//             M[i] = 'a' + (M[i] - 'a' + X) % 26;
//         }
//         else if (M[i] >= '0' && M[i] <= '9')
//         {
//             M[i] = '0' + (M[i] - '0' + Y) % 10;
//         }
//     }
//     printf("%s", M);
//     return 0;
// }
