#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    char itemName[21];
    int price, discount;
    char lowestDiscountItem[21];
    int lowestDiscount = INT_MAX;

    for (int i = 0; i < N; i++) {
        scanf("%s %d %d", itemName, &price, &discount);

        int savings = (price * discount) / 100;
        if (savings < lowestDiscount) {
            lowestDiscount = savings;
            strcpy(lowestDiscountItem, itemName);
        }
    }

    printf("%s\n", lowestDiscountItem);

    return 0;
}
