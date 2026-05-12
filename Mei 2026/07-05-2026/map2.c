#include <stdio.h>
#include <stdlib.h>

int main() {

    int N, lempar=0;
    scanf("%d", &N);

    int *arr = (int*)malloc(N * sizeof(int));
    int *dp = (int*)malloc(N * sizeof(int));

    for (int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<N;i++){
        dp[i]=1;
        int hitung = 1;
        int simpan = 0;
        for (int j=0;j<N;j++){
            //Kalau arr indeks j > indeks i
            if(arr[j]>arr[i]){
                //Kalau arr[j] > simpan
                if(arr[j]>simpan){
                    simpan = arr[j];
                    hitung++;
                }
            }
        }
        if (hitung>lempar){
            lempar=hitung;
        }
    }
    int panjang = N-lempar;
    printf("%d", panjang);
}