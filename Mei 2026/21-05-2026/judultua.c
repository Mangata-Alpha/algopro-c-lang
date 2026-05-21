#include <stdio.h>
#include <ctype.h>

int main(){
    int kal;
    int cek=1;

    while ((kal=getchar()) != EOF){
        if (isspace(kal)){
            cek = 1;
        } else {
            if (cek){
                kal = toupper(kal);
                cek = 0;
            } //plis jangan pake else tolower, ngerusak nilaiiiii
        }
        printf("%c", kal);
    }

}