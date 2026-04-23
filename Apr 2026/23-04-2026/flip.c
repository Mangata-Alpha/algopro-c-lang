#include <stdio.h>

int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int arr[M][N];

    for (int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            scanf("%d", &arr[M-(i+1)][j]);
        }
    }
    for (int a=0; a<M; a++){
        for (int b=0; b<N; b++){
            printf("%d", arr[a][b]);
            if (b==M){
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
}