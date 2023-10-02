#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, N);

    int sum = 0;
    for(int i = 0; i < M; i++) {
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}
