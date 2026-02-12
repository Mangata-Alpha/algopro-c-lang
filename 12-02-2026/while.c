#include <stdio.h>
#include <string.h>

int main()
{
    int hitung;
    char kata[100]; // Harus pake ukuran array
    printf("Tuliskan kata: ");
    // scanf("%s", kata);
    fgets(kata, 100, stdin);
    for (hitung = 0; hitung < strlen(kata) - 1; hitung++)
    {
        printf("%.*s\n", hitung + 1, kata);
        //%.*s --> Ini artinya
        // Format asli %[lebar minimal].[karakter maksimal yang dicetak][jenis data]
        // Tanda titik berfungsi untuk presisi, pendetailan
        //[karakter maksimal yang dicetak], bisa diisi angka atau placeholder berupa tanda *
    }

    return 0;
}