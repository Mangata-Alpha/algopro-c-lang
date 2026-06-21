#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* getln() {
    int c;
    int len = 0;
    int cap = 16;

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

    str[len] = '\0';

    if (len == 0 && c == EOF) {
        free(str);
        return NULL;
    }

    return str;
}

struct DOK {
    char kata[30];
    int pos[100];
    int jumlah;
};

typedef struct DOK doc;

int main() {
    char *token, *line;
    doc list[1000];  // ✅ R up to 1000
    int count = 0;

    while ((line = getln()) != NULL) {
        token = strtok(line, ";");
        if (!token) { free(line); continue; }
        strcpy(list[count].kata, token);

        int j = 0;
        while (token) {
            token = strtok(NULL, ";");
            if (token) list[count].pos[j++] = atoi(token);
        }
        list[count].jumlah = j;
        count++;
        free(line);
    }

    for (int a = 0; a < count; a++) {
        printf("%s(%d):", list[a].kata, list[a].jumlah);
        for (int b = 0; b < list[a].jumlah; b++) {
            printf("%d", list[a].pos[b]);
            if (b < list[a].jumlah - 1) printf("->");
        }
        printf(" \n");  // ✅ trailing space as per expected output
    }

    return 0;
}