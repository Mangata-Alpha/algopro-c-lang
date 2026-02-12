#include <stdio.h>

int main()
{
    int tengah, akhir;

    scanf("%d %d", &tengah, &akhir);

    int rerata = (tengah + akhir) / 2;

    if (rerata > 60)
    {
        if (tengah > 40 && akhir > 40)
        {
            printf("LULUS\n");
        }
        else
        {
            printf("LULUS BERSYARAT\n");
        }
    }
    else if (rerata < 60)
    {
        printf("TIDAK LULUS\n");
    }
    return 0;
}