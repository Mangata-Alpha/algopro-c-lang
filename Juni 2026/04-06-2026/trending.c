#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char tags[1000][101];
    int freq[1000];
    int n = 0;

    char line[1000];

    while (fgets(line, sizeof(line), stdin) != NULL) {
        int len = strlen(line);

        for (int i = 0; i < len; i++) {
            if (line[i] == '#') {
                char tag[101];
                int j = 0;
                i++;

                while (i < len && (isalnum(line[i]) || line[i] == '_')) {
                    tag[j++] = tolower(line[i]);
                    i++;
                }

                tag[j] = '\0';

                if (j == 0) continue;

                int found = -1;

                for (int k = 0; k < n; k++) {
                    if (strcmp(tags[k], tag) == 0) {
                        found = k;
                        break;
                    }
                }

                if (found == -1) {
                    strcpy(tags[n], tag);
                    freq[n] = 1;
                    n++;
                } else {
                    freq[found]++;
                }

                i--;
            }
        }
    }

    int best = 0;

    for (int i = 1; i < n; i++) {
        if (freq[i] > freq[best]) {
            best = i;
        }
    }

    if (n > 0) {
        printf("%s\n", tags[best]);
    }

    return 0;
}