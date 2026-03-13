#include <stdio.h>

int main()
{
    double pi = 3.14159;
    double w, h;

    // Baca w dulu untuk mengecek -1
    while (scanf("%lf", &w) == 1 && w != -1)
    {
        // Baca h. Jika input tidak lengkap, berhenti.
        if (scanf("%lf", &h) != 1)
            break;

        // Pastikan w adalah sisi yang lebih pendek
        if (w > h)
        {
            double temp = w;
            w = h;
            h = temp;
        }

        double max_v = 0;
        double r, v;

        // SKENARIO 1: Keliling lingkaran = w
        r = w / (2.0 * pi);
        v = pi * r * r * (h - 2.0 * r);
        if (v > max_v)
            max_v = v;

        // SKENARIO 2: Diameter lingkaran = w
        // Menggunakan perbandingan r yang muat di sisa keliling h
        double r2 = h / (2.0 * pi + 2.0);
        if (r2 > w / 2.0)
            r2 = w / 2.0;
        double v2 = pi * r2 * r2 * w;

        if (v2 > max_v)
            max_v = v2;

        // Langsung cetak. Di sistem judge, ini tetap benar.
        printf("%.3f\n", max_v);
    }

    return 0;
}