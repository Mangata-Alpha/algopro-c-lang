#include <stdio.h>
 
int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[1];
    float *ptr2 = ptr1 + 3;
 
    printf("%.1f\n", *ptr2);
 
    return 0;
}