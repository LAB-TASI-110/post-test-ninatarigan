#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    int berat;
    int ongkir_perkg = 0;
    int berat_butet = 0, berat_ucok = 0;
    int total_berat = 0;
    int total_ongkir = 0;
    int luar_pulau = 0;
    int count = 0;

    while(1){

        scanf("%s", kode);

        if(strcmp(kode, "end") == 0){
            break;
        }

        scanf("%d", &berat);

        if(strcmp(kode, "mdn") == 0){
            ongkir_perkg = 8000;
        }
        else if(strcmp(kode, "blg") == 0){
            ongkir_perkg = 5000;
        }
        else if(strcmp(kode, "jkt") == 0){
            ongkir_perkg = 12000;
            luar_pulau = 1;
        }
        else if(strcmp(kode, "sby") == 0){
            ongkir_perkg = 13000;
            luar_pulau = 1;
        }

        if(count == 0){
            berat_butet = berat;
        }
        else if(count == 1){
            berat_ucok = berat;
        }

        total_berat += berat;
        total_ongkir += berat * ongkir_perkg;

        count++;
    }

    if(total_berat > 10){
        total_ongkir = total_ongkir - (total_ongkir * 0.1);
    }

    printf("\n===== STRUK PEMBAYARAN DEL EXPRESS =====\n");
    printf("Berat Paket Butet : %d kg\n", berat_butet);
    printf("Berat Paket Ucok  : %d kg\n", berat_ucok);
    printf("Total Berat       : %d kg\n", total_berat);
    printf("Total Ongkir      : Rp %d\n", total_ongkir);

    if(total_berat > 10){
        printf("Promo             : Diskon Ongkir 10%%\n");
    }

    if(luar_pulau == 1){
        printf("Promo Tambahan    : Asuransi Gratis\n");
    }

    printf("========================================\n");

    return 0;
}