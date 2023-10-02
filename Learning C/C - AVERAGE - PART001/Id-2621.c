#include <stdio.h>

int main() {
    int goalsA[100], goalsB[100];
    int numMatches;

    scanf("%d", &numMatches);

    for(int i = 0; i < numMatches; i++) {
        scanf("%d", &goalsA[i]);
    }

    for(int i = 0; i < numMatches; i++) {
        scanf("%d", &goalsB[i]);
    }

    int scoreA = 0, scoreB = 0;

    for(int i = 0; i < numMatches; i++) {
        if(goalsA[i] > goalsB[i]) {
            scoreA += 3;
        } else if(goalsA[i] == goalsB[i]) {
            scoreA++;
            scoreB++;
        } else {
            scoreB += 3;
        }
    }

    printf("%d %d\n", scoreA, scoreB);

    return 0;
}
