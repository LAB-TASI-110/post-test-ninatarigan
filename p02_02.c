#include <stdio.h>
#include <string.h>

int main() {

    int N;
    int stok[100];
    char kategori[100][50];
    char cariKategori[50];
    int total = 0;

    printf("=== Sistem Perhitungan Stok Gudang ===\n");

    printf("Masukkan jumlah total data barang: ");
    scanf("%d", &N);

    getchar();

    for(int i = 0; i < N; i++) {
        printf("\nData barang ke-%d\n", i+1);

        printf("Masukkan stok (pcs): ");
        scanf("%d", &stok[i]);
        getchar();

        printf("Masukkan kategori barang: ");
        fgets(kategori[i], sizeof(kategori[i]), stdin);

        kategori[i][strcspn(kategori[i], "\n")] = 0;
    }

    printf("\nMasukkan kategori yang ingin dihitung: ");
    fgets(cariKategori, sizeof(cariKategori), stdin);
    cariKategori[strcspn(cariKategori, "\n")] = 0;

    for(int i = 0; i < N; i++) {
        if(strcmp(kategori[i], cariKategori) == 0) {
            total += stok[i];
        }
    }

    printf("\nTotal stok untuk kategori '%s' adalah: %d pcs\n", cariKategori, total);

    return 0;
}