#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int *arra = (int *)malloc(a*sizeof(int));
    int *arrb = (int *)malloc(b*sizeof(int));

    // Baris 1
    for (int i=0;i<a;i++){
        scanf("%d", &arra[i]);
    }
    // Baris 2
    for (int j=0;j<b;j++){
        scanf("%d", &arrb[j]);
    }
    // Bandingkan
    // Ini siapin tempat buat nyimpen hasilnya
    int *hasil = (int *)malloc((a+b) *sizeof(int));
    int k=0, i=0, j=0;
    //coba pakai while deh
    while (i<a&&j<b){
        if (arra[i]<=arrb[j]){
            hasil[k]=arra[i];
            i++;
        } else if (arra[i]>arrb[j]){
            hasil[k]=arrb[j];
            j++;
        }
        k++;
    }
    while (j<b) {
        hasil[k]=arrb[j];
        j++;
        k++;
    }
    while (i<a) {
        hasil[k]=arra[i];
        i++;
        k++;
    }

    for (int d=0;d<(a+b);d++){
        printf("%d ", hasil[d]);
    }
    free(arra);
    free(arrb);
    free(hasil);

}