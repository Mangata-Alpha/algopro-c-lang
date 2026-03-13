#include <stdio.h>

int main(){
    int n, k;
    double hasil=0;
    scanf("%d %d", &n, &k);

    //Kalau user ngisi 0 untuk angka yang ingin dimasukkan, maka keluarkan hasil 0.00
    if(n == 0){
        printf("0.00\n");
        return 0;
    }

    int dapat_angka = 0;
    //Variabel dapat_angka digunakan untuk menghitung berapa angka yang ada di posisi ke-(...)k
    int angka;
    for(int i=1; i<=n; i++){
        scanf("%d", &angka);
        if(i % k == 0){
            //cek, kalau misalkan posisi inputan ke-i adalah kelipatan k, maka lakukan
            hasil += angka;
            dapat_angka++;
        }
    }

    if(dapat_angka==0){
        printf("0.00\n");
    } else {
        printf("%.2lf", hasil/dapat_angka);
    }
    return 0;
}