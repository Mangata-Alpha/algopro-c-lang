#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct KataData {
    char teks[100];
    int hitung;
};

struct KataData listKata[505];
int banyakKata = 0;

int main() {
    char input[500];
    char *pisah = " \n\t,.;-";

    while (fgets(input, sizeof(input), stdin)) {

        char *potong = strtok(input, pisah);

        while (potong != NULL) {

            char bersih[100];
            int k = 0;

            for (int i = 0; potong[i] != '\0'; i++) {
                if (isalnum(potong[i])) {
                    bersih[k++] = tolower(potong[i]);
                }
            }
            bersih[k] = '\0';

            if (k < 3) {
                potong = strtok(NULL, pisah);
                continue;
            }

            int ada = 0;

            for (int j = 0; j < banyakKata; j++) {
                if (strcmp(listKata[j].teks, bersih) == 0) {
                    listKata[j].hitung++;
                    ada = 1;
                    break;
                }
            }

            if (!ada) {
                strcpy(listKata[banyakKata].teks, bersih);
                listKata[banyakKata].hitung = 1;
                banyakKata++;
            }

            potong = strtok(NULL, pisah);
        }
    }

    for (int i = 0; i < banyakKata; i++) {
        printf("%s %d\n", listKata[i].teks, listKata[i].hitung);
    }

    return 0;
}