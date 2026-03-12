#include <stdio.h>
int main(){
    int angka;
    scanf("%d", &angka);

    int genap_k=0, total=2*angka;
    for(int i=0; i<total;i++){
        if (i==0){
            printf("1");
        } else if((i+1)%2==0){
            printf("%d", 2*angka-(2*genap_k));
            genap_k++;
        } else if ((i+1)%2!=0){
            printf("%d", i+1);
        }
        if(i<total){
            printf(" ");
        }
    }
}