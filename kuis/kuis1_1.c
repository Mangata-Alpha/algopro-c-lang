#include <stdio.h>

int main()
{
    int x, v, t, ts = 0, sum = 0;
    /*
    x untuk nyimpen "berapa banyak v dan t yang mau dimasukin?"
    v untuk kecepatan
    t ini agak bingungin
    Jadi, t itu nunjukin, sampai jam berapa kamu pakai kecepatan itu. Kalau input t pertamamu 3 lalu yang kedua 6,
    Bacanya jadi, kamu berkendara di kecepatan 1 dari jam ke-0 sampai jam ke-3. Dari jam ke-3 sampai ke-6, kamu pindah ke kecepatan 2
    Makanya untuk nyari jarak, kita perlu ngurangi t sekarang dengan t sebelumnya
    ts adalah tempat simpan jam yang terakhir diinput
    sum untuk nyimpen jumlah jarak
    */
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d %d", &v, &t);
        int w = t - ts;
        // w disini berfungsi buat nyimpen pengurangan jam ke-x saat ini dengan jam ke-x sebelumnya
        // Ini nyimpen durasi penggunaan kecepatan n
        int s = v * w;
        // s untuk nyimpen jarak tiap kecepatan
        ts = t;
        sum += s;
    }
    printf("%d", sum);
}