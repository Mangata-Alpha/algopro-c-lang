#include <stdio.h>

int main(){
    //Variabel biasa
    int a=10, b=20;
    //Inisialisasi pointer. Masukkan alamat var ke pointer
    int *p=&a, *q=&b;
    //Variabel c dan d mengambil nilai pointer
    int c=*p, d=*q;
    //Variabel asli
    int e=a, f=b;
    //int g=p, h=q;

    printf("Melalui pointer, nilai a = %d dan b = %d \n", c, d);
    printf("Nilai asli a = %d dan b = %d\n", e, f);
    printf("Nilai pointer a = %d dan b = %d\n", g, h);
}