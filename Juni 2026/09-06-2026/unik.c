#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

int main(){
    char *p, *kecil;
    p = getln();
    kecil = tolower(p);
}