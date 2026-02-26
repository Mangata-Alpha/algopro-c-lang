#include <stdio.h>
int main()
{
    int A, B, C, K, N[3];

    scanf("%d %d %d %d", &A, &B, &C, &K);

    if (A > B && A > C)
    {
        if (B > C)
        {
            N[0] = A;
            N[1] = B;
            N[2] = C;
        }
        if (B < C)
        {
            N[0] = A;
            N[1] = C;
            N[2] = B;
        }
    }
    else if (A > B && A < C)
    {
        N[0] = C;
        N[1] = A;
        N[2] = B;
    }
}