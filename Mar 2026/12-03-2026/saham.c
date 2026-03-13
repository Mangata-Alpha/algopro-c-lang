#include <stdio.h>
int main(){
    int jml_saham, saham;

    scanf("%d", &jml_saham);

    int saham_lalu =0, selisih_lalu=0, untung=0, rugi=0;
    for(int i = 0; i<jml_saham; i++){
        scanf("%d", &saham);
        int selisih = saham - saham_lalu;
        if(selisih>untung && i > 0){
            untung = selisih;
        } else if (selisih < 0 && selisih < rugi) {
            rugi = selisih;
        }
        saham_lalu = saham;
    }
    printf("%d %d", untung, -rugi);
}  