#include <stdio.h>

int main(){
    int x, v, t, ts=0, sum=0;
    scanf("%d", &x);

    for(int i = 0;i<x;i++){
        scanf("%d %d", &v, &t);
        int w = t - ts;
        int s = v*w;
        ts = t;
        sum += s;
    }
    printf("%d", sum);
}