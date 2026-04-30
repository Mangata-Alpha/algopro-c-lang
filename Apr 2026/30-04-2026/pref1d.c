#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    int pref[n];

    for (int i=0;i<n;i++){
        scanf("%d", &pref[i]);
    }

    int input, hasil;

    while(1) {
        scanf("%d", &input);

        if (input == -9){
            break;
        }

        int hasil;

        if (input == 1){
            hasil = pref[0];
        } else {
            hasil = pref[input - 1] - pref[input - 2];
        }

        printf("%d ", hasil);
    }

    return 0;

}