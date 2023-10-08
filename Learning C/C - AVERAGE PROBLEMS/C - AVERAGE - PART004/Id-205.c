// #include <stdio.h>

// int main() {
//     int runs1[20], runs2[20];
//     int numMatches1, numMatches2;
    
//     // Input for player 1
//     scanf("%d", &numMatches1);
//     if (numMatches1 <= 0) {
//         printf("INVALIDINPUT\n");
//         return 0;
//     }
//     for(int i = 0; i < numMatches1; i++) {
//         scanf("%d", &runs1[i]);
//         if (runs1[i] < 0) {
//             printf("INVALIDINPUT\n");
//             return 0;
//         }
//     }

//     // Input for player 2
//     scanf("%d", &numMatches2);
//     if (numMatches2 <= 0) {
//         printf("INVALIDINPUT\n");
//         return 0;
//     }
//     for(int i = 0; i < numMatches2; i++) {
//         scanf("%d", &runs2[i]);
//         if (runs2[i] < 0) {
//             printf("INVALIDINPUT\n");
//             return 0;
//         }
//     }

//     // Calculate total runs for each player
//     int totalRuns1 = 0, totalRuns2 = 0;
//     for(int i = 0; i < numMatches1; i++) {
//         totalRuns1 += runs1[i];
//     }
//     for(int i = 0; i < numMatches2; i++) {
//         totalRuns2 += runs2[i];
//     }

//     // Check and print the better player's total runs
//     if (totalRuns1 >= totalRuns2) {
//         printf("%d\n", totalRuns1);
//     } else {
//         printf("%d\n", totalRuns2);
//     }

//     return 0;
// }
