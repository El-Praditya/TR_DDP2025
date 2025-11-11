
#include <stdio.h>
#include <stdlib.h>
void pesanan();
    char makan[5][100] = {"Soto Ayam","Nasi Rames","Mie Goreng","Es Teh","Es Jeruk"};
    int harga[5]= {6000,10000,11000, 3000, 4000};
    int jumlah[5];
    int porsi;
    
void main(){
    system("cls");
    int pilih;
    printf("======================================\n");
    printf("|             Menu Restoran          |\n");
    printf("======================================\n");
    printf("| 1 - Soto Ayam             Rp  6000 |\n");
    printf("| 2 - Nasi Rames            Rp 10000 |\n");
    printf("| 3 - Mie Goreng            Rp 11000 |\n");
    printf("| 4 - Es Teh                Rp  3000 |\n");
    printf("| 5 - Es Jeruk              Rp  4000 |\n");
    printf("|====================================|\n");
    printf("|Pilih 0 untuk menyelesaikan pesanan |\n");
    printf("=====================================\n\n");
    printf("Pilih (0-5) : ");
    scanf("%d", &pilih);
    
    switch(pilih){
        case (0):
        pesanan();
        break;

        case (1):
        printf("Jumlah Porsi : ");
        scanf("%d", &porsi);
        jumlah[0] += porsi;
        main();
        break;

        case (2):
        printf("Jumlah Porsi : ");
        scanf("%d", &porsi);
        jumlah[1] += porsi;
        main();
        break;

        case (3):
        printf("Jumlah Porsi : ");
        scanf("%d", &porsi);
        jumlah[2] += porsi;
        main();
        break;

        case (4):
        printf("Jumlah Porsi : ");
        scanf("%d", &porsi);
        jumlah[3] += porsi;
        main();
        break;

        case (5):
        printf("Jumlah Porsi : ");
        scanf("%d", &porsi);
        jumlah[4] += porsi;
        main();
        break;

        default:
        printf("\n\e[31m[ERROR!]\e[0m Angka tidak sesuai. Masukkan angka sesuai menu\n");
        getchar();
        getchar();
        main();
        break;
    }

}

void pesanan(){
int total[5];
int orang;
int tagihan = 0;
printf("=========================================\n");
printf("| Nama\t\tJumlah\t\t Total\t|\n");
printf("=========================================\n");
    for(int i = 0; i < 5; i++){
        total[i] = jumlah[i] * harga[i];
        if(jumlah[i] != 0){
        printf("| %s\t%dx\t\t %6d", makan[i], jumlah[i], total[i]);
        printf("\t|\n");
        }
    }
    for(int i = 0; i < 5; i++){
        tagihan += total[i];
    }
printf("=========================================\n");
printf("|\t\tTotal Bayar : Rp %6d\t|\n", tagihan);   
printf("=========================================\n\n");
printf("Masukkan Jumlah untuk Split Bill : ");
scanf("%d", &orang);

printf("\n=================================================");
printf("\n| Jumlah Orang yang membayar \t: %6d Orang \t|", orang);
printf("\n=================================================");
printf("\n| Total Bayar Per Orang \t: Rp %6d \t|", tagihan/orang);
printf("\n=================================================");


}
