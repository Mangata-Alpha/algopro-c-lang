#include <stdio.h>
#include <ctype.h>

int main(){
    int arr[26]={0};
    char kal;

    while ((kal=getchar()) != EOF){
        char huruf = tolower(kal);
        if (isalpha(huruf)){
            arr[huruf-97]++;
        }
    }

    for (int i=0; i<26; i++){
        if (arr[i]){
            printf("%c %d\n", i+97, arr[i]);
        }
    }
}