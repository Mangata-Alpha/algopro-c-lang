#include <stdio.h>

int main(){
    int fre[201]={0}, jumlah, simpan;

    scanf("%d", &jumlah);

    for (int i=0; i<jumlah; i++){
        scanf("%d", &simpan);
        simpan += 100;
        fre[simpan]++;
    }
    for (int j=0; j<201; j++) {
        if (fre[j]>0) {
            int angka = j-100;
            printf("%d ada %d\n", angka, fre[j]);
        }
    }
}