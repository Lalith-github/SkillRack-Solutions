#include <stdio.h>

int findHCF(int a, int b) {
    int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findHCF(a, b);
}

int main() {
    int N1, N2;
    scanf("%d %d", &N1, &N2);

    int hcf = findHCF(N1, N2);
    int lcm = findLCM(N1, N2);

    int difference = lcm - hcf;

    printf("%d\n", difference);

    return 0;
}
