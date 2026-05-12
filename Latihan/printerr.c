#include <stdio.h>

int main() 
{
    int a;
    int *x;

    x = &a;
    a = 512;
    x[0] = 1;
    x[1] = 2;
    printf("%d",a);

    return 0; 
}