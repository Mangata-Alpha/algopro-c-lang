#include <stdio.h>
int main()
{
    int a = 1, b, c = 0, n = 5;
    for (; c += n--, b = n--;)
        printf("%d %d\n", a, b);
}