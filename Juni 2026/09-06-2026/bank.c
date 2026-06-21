#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char rekening[64];
    int ulang;
} Hai;

char *getln() {
    int c;
    int cap = 16;
    int len = 0;

    char *str = malloc(cap);
    if (!str) return NULL;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (len + 1 >= cap) {
            cap *= 2;
            char *tmp = realloc(str, cap);
            if (!tmp) {
                free(str);
                return NULL;
            }
            str = tmp;
        }

        str[len++] = (char)c;
    }

    if (len == 0 && c == EOF) {
        free(str);
        return NULL;
    }

    str[len] = '\0';
    return str;
}

int cmp(const void *a, const void *b) {
    const Hai *x = (const Hai *)a;
    const Hai *y = (const Hai *)b;

    return strcmp(x->rekening, y->rekening);
}

int main() {
    Hai list[5000];
    int n;

    scanf("%d", &n);
    getchar(); // buang '\n' setelah angka

    for (int i = 0; i < n; i++) {
        char *line = getln();

        strcpy(list[i].rekening, line);
        list[i].ulang = 1;

        free(line);
    }

    qsort(list, n, sizeof(Hai), cmp);

    int i = 0;
    while (i < n) {
        int count = 1;

        while (i + count < n &&
               strcmp(list[i].rekening, list[i + count].rekening) == 0) {
            count++;
        }

        printf("%s %d\n", list[i].rekening, count);

        i += count;
    }

    return 0;
}