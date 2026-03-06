#include <stdio.h>

int main()
{
    /*int a = 7, b = 8, c = 6;
    if (a > b)
    {
    }
    if (b > c)
    {
        printf("c");
    }
    else
    {
        printf("a");
    }
    return 0;

    int ujian1, ujian2;
    scanf("%d %d", &ujian1, &ujian2);
    // syarat kelulusan
    if (ujian1 >= 75 && ujian2 >= 75)
        printf("LULUS");
    else if (ujian1 >= 75)
        printf("MENGULANG");
    else if (ujian2 >= 75)
        printf("BERSYARAT");
    else
        printf("GAGAL");

    int x = 50;
    int y = 10;
    if (x < y)
    {
        printf("Hello World");
    }

    int uts, uas, quis;
    float nilaiAkhir;
    scanf("%d %d %d", &uts, &uas, &quis);
    nilaiAkhir = (40 / 100) * uts + (40 / 100) * uas + 0.2 * quis;
    // Hasil kali uts dan uas akan menghasilkan nol. Karena sistem menganggap 40 / 100 adalah integer sehingga
    // tidak bisa menggunakan koma. Hanya mengambil angka depan, yaitu 0 dari 0,4
    printf("%.2f\n", nilaiAkhir);*/

    int time = 8;
    if (time < 10)
    {
        printf("Good morning.");
    }
    else if (time < 20)
    {
        printf("Good day.");
    }
    else
    {
        printf("Good evening.");
    }
    return 0;
}