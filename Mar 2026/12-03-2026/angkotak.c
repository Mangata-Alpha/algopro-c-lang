#include <stdio.h>
int main(){
    
    int kolom, baris;

    scanf("%d %d", &baris, &kolom);
    
    int angka_akhir=0;

    for(int i=0; i<baris;i++){
        for(int j=0;j<kolom;j++){
            printf("%d", angka_akhir % 10);
            angka_akhir++;
            if(j<kolom){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}