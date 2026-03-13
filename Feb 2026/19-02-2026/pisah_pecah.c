#include <stdio.h>

int main()
{

    double angka;

    scanf("%lf", &angka);
    double angkoma = angka - (int)angka;

    printf("%d %.5lf\n", (int)angka, angkoma);
    return 0;

    // bisa pakai modf dari <math.h>
}