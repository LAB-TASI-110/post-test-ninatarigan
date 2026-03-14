#include <stdio.h>

int main() {
    int pilihan;
    int jumlah;
    int total = 0;
    int harga;

    printf("=====================================\n");
    printf("      SISTEM KAFETARIA IT DEL\n");
    printf("=====================================\n");

    printf("Daftar Menu:\n");
    printf("1. Nasi Goreng        : Rp15000\n");
    printf("2. Mie Goreng         : Rp13000\n");
    printf("3. Ayam Geprek        : Rp17000\n");
    printf("4. Bakso              : Rp12000\n");
    printf("5. Teh Manis          : Rp5000\n");
    printf("6. Jus Alpukat        : Rp10000\n");

    printf("-------------------------------------\n");

    printf("Masukkan nomor menu yang dipilih : ");
    scanf("%d", &pilihan);

    printf("Masukkan jumlah pesanan : ");
    scanf("%d", &jumlah);

    switch(pilihan) {
        case 1:
            harga = 15000;
            total = harga * jumlah;
            printf("Menu yang dipilih : Nasi Goreng\n");
            break;

        case 2:
            harga = 13000;
            total = harga * jumlah;
            printf("Menu yang dipilih : Mie Goreng\n");
            break;

        case 3:
            harga = 17000;
            total = harga * jumlah;
            printf("Menu yang dipilih : Ayam Geprek\n");
            break;

        case 4:
            harga = 12000;
            total = harga * jumlah;
            printf("Menu yang dipilih : Bakso\n");
            break;

        case 5:
            harga = 5000;
            total = harga * jumlah;
            printf("Menu yang dipilih : Teh Manis\n");
            break;

        case 6:
            harga = 10000;
            total = harga * jumlah;
            printf("Menu yang dipilih : Jus Alpukat\n");
            break;

        default:
            printf("Menu tidak tersedia.\n");
            return 0;
    }

    printf("Jumlah pesanan : %d\n", jumlah);
    printf("Total harga yang harus dibayar : Rp%d\n", total);

    printf("=====================================\n");
    printf("Terima kasih telah membeli di\n");
    printf("Kafetaria IT Del\n");

    return 0;
}