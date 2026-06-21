#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int jumlah, q;
    scanf("%d", &jumlah);
    char *s[1000];
    getchar();
    for (int i=0;i<jumlah;i++){
        s[i]=(char*)malloc(2000*sizeof(char));
        fgets(s[i], 2000, stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
    }
    while(scanf("%d", &q) == 1 && q != -9){
        printf("%s\n", s[q-1]);
    }
}