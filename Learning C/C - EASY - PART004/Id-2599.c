#include <stdio.h>

int main() {
    double cost_alen, cost_tim, width_alen, width_tim;
    scanf("%lf %lf", &cost_alen, &cost_tim);
    scanf("%lf %lf", &width_alen, &width_tim);

    double area_alen = cost_alen / 5;
    double length_alen = area_alen / width_alen;

    double area_tim = cost_tim / 5;
    double length_tim = area_tim / width_tim;

    double difference = length_tim - length_alen;

    printf("%.2lf", difference);

    return 0;
}
