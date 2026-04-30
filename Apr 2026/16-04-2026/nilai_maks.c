#include <stdio.h>
int main()
{
    long int hari, max = 0;
    char *max_hari;
    double jumlah=0;
    char *harian[7]={"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    
    for (int i = 0; i < 7; i++)
    {
        scanf("%ld", &hari);

        if (hari > max)
        {
            max = hari;
            max_hari = harian[i];
        }

        jumlah += hari;
    }
    double rata = jumlah / 7;
    printf("%.2lf\n%ld\n%s\n", rata, max, max_hari);
}