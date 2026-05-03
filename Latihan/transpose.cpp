#include <stdio.h>
#include <stdlib.h>

void transpose (int bar, int kol, int *hasil){
    for (int i=0;i<bar;i++){
        for (int j=0;j<kol;j++){
            printf("%d", hasil[i*kol+j]);
            if (j != kol-1){
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }
}

int main(){
    int bar, kol;
    scanf("%d %d", &bar, &kol);

    
    int *angka = (int *)malloc(kol*bar*sizeof(int));;
    for (int i=0;i<bar;i++){
        for (int j=0;j<kol;j++){
            scanf("%d", &angka[i*kol+j]);
        }
    }

    //transpose
    int *hasil = (int *)malloc(kol*bar*sizeof(int));
    for (int i=0;i<bar;i++){
        for (int j=0;j<kol;j++){
            //jumlah kolom jadi baris
            hasil[j*bar+i] = angka[i*kol+j];
        }
    }

    transpose(kol, bar, hasil);
    return 0;

}