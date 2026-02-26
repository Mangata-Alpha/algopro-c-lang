#include <stdio.h>
int main()
{
    int S, N, D;

    scanf("%d %d %d", &S, &N, &D);

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", S);

        S += D;
    }
}