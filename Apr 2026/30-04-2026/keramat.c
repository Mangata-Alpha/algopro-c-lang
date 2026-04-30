#include <stdio.h>

int main(){
    int N, hitung=0, total;
    scanf("%d", &N);

    int arr[N];
    // Masukkan semua angka ke array dulu
    for (int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    // Mulai validasi isi array
    for (int y=0;y<N;y++){
        // Ini kalau nilai si array non prefixsum udah 47
        if (arr[y]==47){
            hitung++;
        } else {
            // Karena bukan 47, jadi nilai array sekarang kita pegang.
            total = arr[y];
            for (int j=y+1; j<N;j++){
                // Disini, kita nambah nilai array yang dipegang sama array setelahnya
                total +=arr[j];
                if (total==47){
                    hitung++;
                } else if (total>47){
                    break;
                }
            }
        }
    }
    printf("%d", hitung);
}