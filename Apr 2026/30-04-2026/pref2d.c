#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int arr[a][b];

    // input prefix sum 2D
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int ta, tb, hasil;

    while (1){
        scanf("%d", &ta);

        if (ta == -9) break;  // sentinel

        scanf("%d", &tb);

        int i = ta - 1;
        int j = tb - 1;

        if (i == 0 && j == 0){
            hasil = arr[i][j];
        }
        else if (i == 0){
            hasil = arr[i][j] - arr[i][j-1];
        }
        else if (j == 0){
            hasil = arr[i][j] - arr[i-1][j];
        }
        else {
            hasil = arr[i][j]
                  - arr[i-1][j]
                  - arr[i][j-1]
                  + arr[i-1][j-1];
        }

        printf("%d\n", hasil);
    }

    return 0;
}