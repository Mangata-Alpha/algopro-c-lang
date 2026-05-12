#include <stdio.h>
#include <stdlib.h>

int main(){
    int angka;
    scanf("%d", &angka);

    int *arr = (int *)malloc(angka* sizeof(int));
    int *sum = (int *)malloc((angka+1)* sizeof(int));

    sum[0]=0;
    for (int i = 0;i<angka;i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0;i<angka+1;i++){
        sum [i+1] = sum[i]+arr[i];
    }
    int val1, val2;
    while(1){
        scanf("%d", &val1);
        if (val1==-9){
            break;
        }
        scanf("%d", &val2);
        int hasil = sum[val2]-sum[val1-1];
        printf("%d\n", hasil);
    } 
    free(arr);
    free(sum);

}