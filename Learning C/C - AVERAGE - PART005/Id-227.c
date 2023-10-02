#include <stdio.h>

char find_correct_operator(int A, int B, int C, char op) {
    if (op == '+') {
        if (A + B == C)
            return '+';
        else if (A - B == C)
            return '-';
        else if (A * B == C)
            return '*';
        else if (A / B == C)
            return '/';
    } else if (op == '-') {
        if (A - B == C)
            return '-';
        else if (A + B == C)
            return '+';
        else if (A * B == C)
            return '*';
        else if (A / B == C)
            return '/';
    } else if (op == '*') {
        if (A * B == C)
            return '*';
        else if (A + B == C)
            return '+';
        else if (A - B == C)
            return '-';
        else if (A / B == C)
            return '/';
    } else if (op == '/') {
        if (A / B == C)
            return '/';
        else if (A + B == C)
            return '+';
        else if (A - B == C)
            return '-';
        else if (A * B == C)
            return '*';
    }
    
    return '\0'; // Return null character if no valid operator found
}

int main() {
    int A, B, C;
    char op;
    scanf("%d%c%d=%d", &A, &op, &B, &C); // Read input
    
    char correct_operator = find_correct_operator(A, B, C, op); // Find correct operator
    
    printf("%c\n", correct_operator); // Print the correct operator
    
    return 0;
}
