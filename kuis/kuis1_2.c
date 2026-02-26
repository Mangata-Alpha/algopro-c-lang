#include <stdio.h>

int main()
{
    int hari;
    // variabel hari, tipe data integer untuk nyimpen inputan angka dari user. Disini angkanya berfungsi untuk nunjukin "hari ke berapa?""
    scanf("%d", &hari);
    if (hari == 1)
    {
        printf("TEMPE DAN PISGOR");
    }
    else if (hari > 1)
    {
        /*Pengecekan hari.
        Dikatakan bahwa tempe datang setiap hari ke-4, 7, 10,...
        3n+1 = hari tempe
        sedangkan pisang datang setiap hari ke-6, 11, 16,...
        5n+1 = hari pisang
        */
        int pisang = (hari - 1) % 5;
        // Pakai mod untuk memastikan angka habis dibagi 5
        int tempe = (hari - 1) % 3;

        if (pisang == 0 && tempe == 0)
        {
            printf("TEMPE DAN PISGOR");
        }
        else if (pisang == 0)
        {
            printf("PISGOR");
        }
        else if (tempe == 0)
        {
            printf("TEMPE");
        }
        else
        {
            printf("KOSONG");
        }
    }
    /*Kenapa pakai else if, bukan pakai else?
    Soalnya aku pengen biar gimana caranya kalau misalkan user masukin angka negatif,
    program nggak bakal ngeluarin apapun. Makaknya aku pakai else if (hari>1)
    Ini dilakukan untuk mengecek apakah hari yang diinput user bernilai lebih dari satu
    Kalau pakai else doang, program akan baca sebagai, "Apabila hari bernilai semua bilangan bulat kecuali satu. Termasuk angka negatif"
    */
}