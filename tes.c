#include <stdio.h>
#define n 5
int main()
{
    int a[n] = {1,2,3,4,5};
    int t;
    for (int i=0; i<n; i++) 
    {
        t=a[i]; 
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    return 0;
}