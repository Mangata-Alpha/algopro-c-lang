#include <stdio.h>
#include <stdlib.h>

int main() {

    int *arra, *arrb;

    int a = 0, b = 0;
    int input;

    // input array A
    while (1) {

        scanf("%d", &input);

        if (input == -9)
            break;

        arra = realloc(arra, (a + 1) * sizeof(int));

        arra[a] = input;
        a++;
    }

    // input array B
    while (1) {

        scanf("%d", &input);

        if (input == -9)
            break;

        arrb = realloc(arrb, (b + 1) * sizeof(int));

        arrb[b] = input;
        b++;
    }

    // array hasil
    int *hasil = malloc((a + b) * sizeof(int));

    int i = 0, j = 0, k = 0;

    // merge
    while (i < a && j < b) {

        if (arra[i] <= arrb[j]) {
            hasil[k++] = arra[i++];
        }
        else {
            hasil[k++] = arrb[j++];
        }
    }

    // sisa A
    while (i < a) {
        hasil[k++] = arra[i++];
    }

    // sisa B
    while (j < b) {
        hasil[k++] = arrb[j++];
    }

    // output
    for (int i = 0; i < a + b; i++) {
        printf("%d ", hasil[i]);
    }

    printf("\n");
    free(hasil);

    return 0;
}