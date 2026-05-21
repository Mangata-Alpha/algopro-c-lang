#include <stdio.h>

int main(){
    int tinggi;
    char s1, s2, s3;

    scanf("%d ", &tinggi);
    scanf("%c %c %c", &s1, &s2, &s3);

    printf("%c\n", s1);

    for (int i=0; i<(tinggi-2); i++){
        printf("%c", s1);
        int count = 0;
        while (count<i){
            printf(" ");
            count++;
        }
        printf("%c\n", s3);
    }
    for (int j=0; j<tinggi-1; j++){
        printf("%c", s2);
    }
    printf("%c", s3);
}