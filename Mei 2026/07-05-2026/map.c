#include <stdio.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);

    int *arr = malloc(N * sizeof(int));
    int *dp = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // LIS
    for (int i = 0; i < N; i++) {

        dp[i] = 1;

        for (int j = 0; j < i; j++) {

            if (arr[j] < arr[i]) {

                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }

    // cari LIS maksimum
    int lis = 0;

    for (int i = 0; i < N; i++) {

        if (dp[i] > lis) {
            lis = dp[i];
        }
    }

    // minimum langkah
    printf("%d\n", N - lis);

    free(arr);
    free(dp);

    return 0;
}