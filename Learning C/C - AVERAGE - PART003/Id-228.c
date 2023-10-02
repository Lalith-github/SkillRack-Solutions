#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double efficiency[N];
    for (int i = 0; i < N; i++) {
        int fuel, distance;
        scanf("%d %d", &fuel, &distance);
        efficiency[i] = (double) distance / fuel;
    }

    double maxEfficiency = -1;
    int mostEfficientCar = -1;
    for (int i = 0; i < N; i++) {
        if (efficiency[i] > maxEfficiency) {
            maxEfficiency = efficiency[i];
            mostEfficientCar = i + 1;
        }
    }

    printf("%d\n", mostEfficientCar);

    return 0;
}
