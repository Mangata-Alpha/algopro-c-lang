#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int* swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int* bubbleSort(int m, int n, int *A[m][n]) {
    for (int i = 1; i <= m - 1; i++) {
        for (int j = 1; j <= n - i - 1; j++) {
            if (A[i][j] > A[i][j + 1]) {
                swap(A[i][j], A[i][j + 1]);
            }
                printf ("%d", A[i][j]);
        }
    }
}

int main (){
    int m,n;
    int A[100][100];
       scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
            bubbleSort(m,n, &A[i][j]);
        }
    }

 free (bubbleSort);
    return 0;
}
