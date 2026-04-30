#include <stdio.h>
#include <stdlib.h>

int main() {
    int bar, kol;
    scanf("%d %d", &bar, &kol);
    int *arr[bar];

    // Buat wadah matriks 2d
    for(int i=0;i<bar;i++){
        arr[i] = (int *)malloc(kol*sizeof(int));
    }

    // Sini buat input?? Coba feeling dulu dah
    for (int i=0;i<bar;i++){
        for(int j=0;j<kol;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // Sini buat prefix sum
    // Untuk baris ke-1, mereka prefix dari kolom sebelum mereka
    // Untuk baris lebih dari 1, mereka prefix dari baris sebelum-kolom sama dan baris sama-kolom sebelum
    int *presum[bar];
    for(int i=0;i<bar;i++){
        presum[i] = (int *)malloc(kol*sizeof(int));
    }

    for (int i=0; i<bar;i++){
        for (int j=0;j<kol;j++){
            if (i==0&&j==0){
                presum[i][j]=arr[i][j];
            } else if (i==0){
                presum [i][j] = arr[i][j] + presum[i][j-1];
            } else if (j==0){
                presum[i][j] = arr[i][j] + presum[i-1][j];
            } else {
                presum[i][j] = arr[i][j] + presum[i-1][j] + presum[i][j-1] - presum[i-1][j-1];
            }
        }
    }

    //Cetak
    for (int i=0;i<bar;i++){
        for(int j=0;j<kol;j++){
            printf("%d ", presum[i][j]);
        }
        printf("\n");
    }
}