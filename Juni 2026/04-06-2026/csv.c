#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    char line[2000];
    double total = 0;

    for (int i = 0; i < N; i++) {
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';

        char *umur = strtok(line, ";");
        char *nama = strtok(NULL, ";");

        total += atoi(umur);
        printf("%s\n", nama);
    }

    printf("%.2f\n", total / N);

    return 0;
}