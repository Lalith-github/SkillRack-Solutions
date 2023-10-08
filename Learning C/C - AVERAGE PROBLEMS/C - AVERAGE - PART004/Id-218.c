// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     float totalAmount = 0;

//     for (int i = 0; i < n; i++) {
//         float price;
//         scanf("%f", &price);

//         if (price >= 1000) {
//             totalAmount += price * 0.5;
//         } else if (price >= 500) {
//             totalAmount += price * 0.75;
//         } else if (price > 400) {
//             totalAmount += price * 0.8;
//         } else {
//             totalAmount += price;
//         }
//     }

//     if (totalAmount > 2000) {
//         totalAmount -= 100;
//     }

//     printf("%.2f\n", totalAmount);

//     return 0;
// }
