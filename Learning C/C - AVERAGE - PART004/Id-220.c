#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int X, Y;
    scanf("%d%d", &X, &Y);

    int reversed_X = reverse(X);
    int reversed_Y = reverse(Y);

    int sum = reversed_X + reversed_Y;

    int reversed_sum = reverse(sum);

    printf("%d\n", reversed_sum);

    return 0;
}
