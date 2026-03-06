#include <stdio.h>

int main(){
    double pajak, angka;
    scanf("%lf", &pajak);
    angka = pajak / 1.15;
    printf("%.2lf \n", angka);
    return 0;
}