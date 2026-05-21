#include <stdio.h>
#include <ctype.h>

int main (){
    char a, b;
    scanf("%c ", &a);
    scanf("%c ", &b);

    char kal;
    char A, B;
    A = toupper(a);
    B = toupper(b);
    while ((kal=getchar())!=EOF)
    {
        if (isupper(kal)){
            if (kal == A){
                kal = B;
            }
        } else if (islower(kal)){
            if(kal == a){
                kal = b;
            }
        }
        printf("%c", kal);
    }
    
}