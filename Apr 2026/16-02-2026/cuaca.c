#include <stdio.h>
int main()
{
    int hari, xselang, air1, air2, air_harian;
    scanf("%d %d", &hari, &xselang);
    int arr_harian[hari], presum[hari];
    double rata, jumlah;
    for (int i = 0; i < hari; i++)
    {
        scanf("%d", &air_harian);
        arr_harian[i] = air_harian;
        presum[i+1] = presum[i] + air_harian;
    }
    for (int j = 0; j < xselang; j++)
    {
        jumlah = 0;
        scanf("%d %d", &air1, &air2);
        rata = (presum[air2]-presum[air1-1]) / (air2 - (air1 - 1));
        printf("Hari ke %d-%d: %.2f\n", air1, air2, rata);
    }
}