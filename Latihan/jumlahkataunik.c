#include <ctype.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char stray[500];
    int a;
} count;

int main(){
    count arr[20];
    char string[500];

    scanf("%[^\n]s", string);

    char lower[500];
    char ubah[500];

    int i=0;
    for (; i<(strlen(string))+1; i++){
        if (string[i] != '\0'){
            lower[i] = tolower(string[i]);
        } else {
            lower[i] = '\0';
        }

    }
    
    int j=0;
    char *token = strtok(lower, " ,\".';?!");
    while(token != NULL){
        int sama=0;
        
        for (int k=0; k<j;k++){
            if(strcmp(token, arr[k].stray) == 0){
                arr[k].a++;
                sama =1;
                break;
            } 
        }

        if (sama == 0){
            strcpy(arr[j].stray,token);
            arr[j].a=1;
            j++;
        }
        token  = strtok(NULL, " ,\".';?!");
    }

    for(int l=0;l<j;l++){
        printf("%s %d\n", arr[l].stray, arr[l].a);
    }
}