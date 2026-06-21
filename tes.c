#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch;
    int n=0;

    while ((ch=getchar())!=EOF) n++;

    printf("%d\n", n);
    return 0;
}