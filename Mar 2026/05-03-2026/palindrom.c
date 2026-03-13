#include <stdio.h>

int main(){
    int a, hasil;
    scanf("%d", &a);

    for(int i = 0; i <a; i++){
        int angka;
        scanf("%d", &angka);
        
        //Ini bagian buat angka kebalikannya
        int a_asli = angka, balik=0;
        while(angka>0){
            int sisa = angka%10;
            balik = (balik*10)+sisa;
            angka = angka/10;
        }
        //Ini buat ngecek apakah angka kebalikannya dan angka asli sama
        if(balik == a_asli){
            printf("1\n");
        } else {
            printf("0\n");
        }
    }
    return 0;
}