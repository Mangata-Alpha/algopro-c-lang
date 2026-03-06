#include <stdio.h> // Library umum

int main() {
    char nama[100]; //Kalau string harus spesifik maks nilainya
    int umur;
    printf("Masukkan nama kamu: ");
    scanf("%s", &nama );
    printf("Masukkan umur kamu: ");
    scanf("%d", &umur );
    printf("Halo %s! Sekarang, umurmu %d tahun", nama, umur);
    return 0;
}