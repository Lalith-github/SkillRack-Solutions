#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);

    int num1 = 0, num2 = 0;
    char op;
    int i = 0;

    while (s[i] >= '0' && s[i] <= '9') {
        num1 = num1 * 10 + (s[i] - '0');
        i++;
    }

    op = s[i];
    i++;

    while (s[i] != '\0') {
        num2 = num2 * 10 + (s[i] - '0');
        i++;
    }

    int result;

    switch(op) {
        case 'A':
        case 'a':
            result = num1 + num2;
            break;
        case 'S':
        case 's':
            result = num1 - num2;
            break;
        case 'M':
        case 'm':
            result = num1 * num2;
            break;
        case 'D':
        case 'd':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }

    printf("%d\n", result);

    return 0;
}
