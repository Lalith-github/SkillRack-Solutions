#include <stdio.h>

int sum_of_proper_divisors(int N) {
    int total = 1; // Initialize total to 1 since 1 is always a proper divisor
    
    for (int i = 2; i*i <= N; i++) {
        if (N % i == 0) {
            total += i;
            if (i != N / i) {
                total += N / i;
            }
        }
    }
    
    return total;
}

int main() {
    int N;
    scanf("%d", &N); // Read input
    
    int result = sum_of_proper_divisors(N); // Calculate sum of proper divisors
    printf("%d\n", result); // Print the result
    
    return 0;
}
