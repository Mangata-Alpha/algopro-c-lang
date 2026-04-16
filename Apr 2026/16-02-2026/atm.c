#include <stdio.h>
int main () {
    int d;
    scanf("%d", &d);
    if(d % 50000 == 0){    
        if(d>1000000){
            printf("Saldo tidak cukup.\n");
        } else {
            int hasil = 1000000-d;
            printf("Berhasil. Sisa saldo = %d rupiah.\n", hasil);
        }
        
    } else {
        printf("Penarikan harus kelipatan 50000 rupiah.\n");
    }
    return 0;
}