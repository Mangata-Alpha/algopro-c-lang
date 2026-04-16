#include <stdio.h>
int main()
{
    double harga, pajak, jumlah, total;
    
    scanf("%lf %lf", &harga, &jumlah);
    pajak = 0.1 * (harga*jumlah);
    total = pajak + (harga*jumlah);
    printf("%.2lf", total);
}