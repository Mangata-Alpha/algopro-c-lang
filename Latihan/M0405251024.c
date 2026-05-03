#include <stdio.h>
#include <stdlib.h>

void transpose (int bar, int kol, int hasil[bar][kol]){
    for (int i=0;i<bar;i++){
        for (int j=0;j<kol;j++){
            printf("%d", hasil[i][j]);
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

    int angka[bar][kol];
    for (int i=0;i<bar;i++){
        for (int j=0;j<kol;j++){
            scanf("%d", &angka[i][j]);
        }
    }

    //transpose
    int hasil[kol][bar];
    for (int i=0;i<bar;i++){
        for (int j=0;j<kol;j++){
            hasil[j][i] = angka[i][j];
        }
    }

    transpose(kol, bar, hasil);
    return 0;

}