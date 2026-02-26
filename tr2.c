#include <stdio.h>

int main(){
    int hari;

    scanf("%d", &hari);
    if (hari==1){
        printf("TEMPE DAN PISGOR");

    } else if (hari>1) {
        int pisang = (hari-1)%5;
        int tempe = (hari-1)%3;

        if(pisang==0 && tempe ==0){
            printf("TEMPE DAN PISGOR");
        } else if (pisang == 0){
            printf("PISGOR");
        } else if (tempe==0){
            printf("TEMPE");
        } else {
            printf("KOSONG");
        }
    }
}