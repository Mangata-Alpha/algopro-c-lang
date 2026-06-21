#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char stray[500];
    int a[50];
    int hit;
} count;

int main(){
    count arr[300];
    char freed[500];

    int i = 0;
    while(fgets(freed, 500, stdin) != NULL){
        char *token = strtok(freed, ";");
        strcpy(arr[i].stray, token);
        int k = 0;
        while (token != NULL){
            token = strtok(NULL, ";");
            arr[i].a[k] = atoi(token);
            arr[i].hit = k++;
        }
        i++;
    }
    for (int j=0; j<i;j++){
        printf("%s[%d]: ", arr[j].stray, arr[j].hit);
        for (int l=0;l<(arr[j].hit);l++){
            printf("%d", arr[j].a[l]);
            if(l!=(arr[j].hit)-1){
                printf("->");
            }
        }
        printf("\n");
    }
}