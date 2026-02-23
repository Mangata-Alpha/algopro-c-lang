#include <stdio.h>

int main()
{

    int jari;
    int x, y, dalam = 0, luar = 0;
    scanf(" %d", &jari);

    int luas = jari * jari;
    while (scanf("%d", &x) == 1)
    {
        if (x == -999)
            break;
        if (scanf("%d", &y) != 1)
            break;

        int jarak = x * x + y * y;

        if (jarak < luas)
        {
            dalam++;
        }
        else if (jarak > luas)
        {
            luar++;
        }
    }

    printf("%d %d\n", dalam, luar);

    return 0;
}