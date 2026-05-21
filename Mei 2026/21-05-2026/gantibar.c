#include <stdio.h>
#include <ctype.h>

int main() {
    char a, b;
    // Menggunakan " %c" (spasi di depan %c) adalah cara paling aman 
    // untuk membaca karakter tanpa terganggu oleh enter atau spasi di input
    if (scanf(" %c %c", &a, &b) != 2) return 0;

    // Bersiap membuat versi kapitalnya jika a dan b adalah huruf
    char A = toupper((unsigned char)a);
    char B = toupper((unsigned char)b);
    
    // Pastikan juga punya versi huruf kecilnya untuk jaga-jaga jika input 'a' diawali huruf kapital
    char awal_kecil = tolower((unsigned char)a);
    char ganti_kecil = tolower((unsigned char)b);

    int kal; // Gunakan int agar aman membaca EOF

    // Bersihkan sisa karakter enter (\n) yang tertinggal di buffer setelah scanf
    // agar tidak ikut terbaca oleh loop getchar()
    while ((kal = getchar()) != '\n' && kal != EOF);

    // Mulai membaca teks utama
    while ((kal = getchar()) != EOF) {
        if (kal == awal_kecil) {
            kal = ganti_kecil; // Jika cocok dengan versi huruf kecil
        } else if (kal == A) {
            kal = B;           // Jika cocok dengan versi huruf besar
        }
        
        printf("%c", kal);
    }
    
    return 0;
}