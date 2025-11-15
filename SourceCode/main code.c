#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
void menu();
void restoran();
    void pesanan();
void kamus();
void pola();
void game();
void yesno();
void konfirmasikeluar();

char makan[5][100] = {"Soto Ayam","Nasi Rames","Mie Goreng","Es Teh","Es Jeruk"};
int loadonce = 0;
int harga[5]= {6000,10000,11000, 3000, 4000};
int jumlah[5];
int porsi;

void loading (){
    system("cls");
    int i;
    int b;
    char word[] = "L O A ";
    char word1[] = "D I ";
    char word2[] = "N G";

    for (int j = 0; word [j] != '\0'; j++){
        printf("%c", word[j]);
        fflush(stdout);
        Sleep(620);

    }

    for (int a = 0; word1 [a] != '\0'; a++){
        printf("%c", word1[a]);
        fflush(stdout);
        Sleep(150);
    }

    for (int b = 0; word2 [b] != '\0'; b++){
        printf("%c", word2[b]);
        fflush(stdout);
        Sleep(280);
    }

    Sleep(1500);

    for (i = 0; i < 3; i++){
        Sleep(854);
        fflush(stdout);
        printf(" .");
    }

    Sleep(1500);
    printf(" \n\n\033[1m\033[32mWELCOME!\n\033[0m");
    
    Sleep(2000);
}

void main(){
    if(loadonce == 0){
    loading();
    loadonce++;
    }

    system("cls");
    char userpass[2][2][10] = {{"user1","user2"},{"usersatu","userdua"}};
    char user[10], pass[10];
    int a, b, c = 0;
    
    printf("\e[1;31m _____________________________________\e[0m\n");
    printf("\e[1;31m|----------| TUGAS RANCANG |----------|\e[0m\n");
    printf("\e[1;31m =====================================\e[0m\n");

    printf("\nUsername : ");
    scanf("%10s", &user);
    printf("Password : ");
    scanf("%10s", &pass);

    for(int i=0; i<2;i++){
    a = strcmp(userpass[0][i],user);
    b = strcmp(userpass[1][i],pass);
    if(a == 0 && b == 0){
        c = 1;
        }
    }

    if( c == 1 ){
        printf("\n\e[32mLogin Sukses!\e[0m\nTekan Enter untuk lanjut...");
        getchar();
        getchar();
        menu();
    } else {
        printf("\n\e[31m[ALERT]\e[0m Login gagal. Coba lagi? (y/n) :");
        yesno();
        main();
        }
    }


void menu(){
system("cls");
int pilihan;
// ASCII
    printf("\n\033[31m              _                                 \033[0m\n");
    printf("\033[31m  /\\/\\   __ _(_)_ __     /\\/\\   ___ _ __  _   _ \033[0m\n");
    printf("\033[31m /    \\ / _` | | '_ \\   /    \\ / _ \\ '_ \\| | | |\033[0m\n");
    printf("\033[31m/ /\\/\\ \\ (_| | | | | | / /\\/\\ \\  __/ | | | |_| |\033[0m\n");
    printf("\033[31m\\/    \\/\\__,_|_|_| |_| \\/    \\/\\___|_| |_|\\__,_|\033[0m\n\n");
    printf("\033[31m=====================v.0.3======================\033[0m\n\n");
                                                
    do{ 
        printf("\033[32m\tDaftar Kode Yang Bisa Dijalankan: \n\n\033[0m");
        printf("\033[32m1\033[0m. Restoran\n");
        printf("\033[32m2\033[0m. Pola Grafis Rumah\n");
        printf("\033[32m3\033[0m. Game (Batu-Gunting-Kertas)\n");
        printf("\033[32m4\033[0m. Kamus\n");
        printf("\033[32m5\033[0m. Keluar dari program\n");
        printf("\033[32m6\033[0m. Author\n");

        printf("\n\033[32mPilih yang mana? \033[0m");
        scanf("%d", &pilihan);

// Kondisi
        if (pilihan < 1 || pilihan > 6){
            printf("\033[31m\n[ALERT]\033[0m Pilihan %d tidak valid. Masukan angka 1 - 6\n\n", pilihan);
            getchar();
            getchar();

        } else if(pilihan == 1){
        restoran();
        } else if(pilihan == 2){
        pola();
        } else if(pilihan == 3){
        game();
        } else if(pilihan == 4){
        kamus();
        } else if (pilihan == 5){
            konfirmasikeluar();
            break;
        } 
    }
    while (pilihan < 1 || pilihan > 6);

}

void restoran(){
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
        restoran();
        break;

        case (2):
        printf("Jumlah Porsi : ");
        scanf("%d", &porsi);
        jumlah[1] += porsi;
        restoran();
        break;

        case (3):
        printf("Jumlah Porsi : ");
        scanf("%d", &porsi);
        jumlah[2] += porsi;
        restoran();
        break;

        case (4):
        printf("Jumlah Porsi : ");
        scanf("%d", &porsi);
        jumlah[3] += porsi;
        restoran();
        break;

        case (5):
        printf("Jumlah Porsi : ");
        scanf("%d", &porsi);
        jumlah[4] += porsi;
        restoran();
        break;

        default:
        printf("\n\e[31m[ERROR!]\e[0m Angka tidak sesuai. Masukkan angka sesuai menu\n Tekan enter untuk kembali\n");
        getchar();
        getchar();
        restoran();
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
    printf("Masukkan Jumlah Orang untuk Split Bill : ");
    scanf("%d", &orang);

    if(orang == 0){
        printf("[ALERT] Angka untuk split bill invalid. mohon buat pesanan lain... (Tekan enter untuk lanjut)");
            for(int i = 0; i < 5; i++){
            jumlah[i] = 0;
                }
            porsi = 0;
            getchar();
            getchar();
            restoran();
    } else {
    printf("\n=================================================");
    printf("\n| Jumlah Orang yang membayar \t: %6d Orang \t|", orang);
    printf("\n=================================================");
    printf("\n| Total Bayar Per Orang \t: Rp %6d \t|", tagihan/orang);
    printf("\n=================================================");

    printf("\n\nTekan Enter untuk kembali ke menu");
    getchar();
    getchar();
    menu();
    }
}

void pola(){
system("cls");
    printf("\e[36m===========================================================\n");
    printf("|                | PROGRAM MEMBANGUN RUMAH |              |\n");
    printf("===========================================================\e[0m\n");
    int tinggi, a, b, c, d, e, f, g, h, i;
    char bata; 
    printf("Masukkan Tinggi Rumah: ");
    scanf("%d", &tinggi);
    printf("Masukkan 'Bata' Rumah: ");
    scanf(" %c", &bata);
    printf("\n");
    
            //cerobong
    for(a = 1; a <= tinggi; a++ ){
        for(g = 1; g <= tinggi; g++){
            for(h = 0; h < (tinggi*2); h++){ //spasi
                printf(" ");
                    Sleep(50);
            }
            for(i = 0; i < (tinggi - 1); i++){
                printf("\e[33m%c\e[0m", bata);
                    Sleep(50);
            }
            printf("\n");
        }
            //atap rumah
    for(a = 1; a <= tinggi; a++ ){
        for(b=tinggi; b > a; b--){ //spasi
            printf(" ");
                Sleep(50);
             }
        for(c = 1; c <= (a+(a-1)); c++){
            printf("\e[35m%c\e[0m", bata);
                Sleep(50);
             }
        for(d = 0; d < (tinggi*2); d++){ // tembok atap
            printf("\e[31m%c\e[0m", bata);
                Sleep(50);
             }
        printf("\n");
        }

            //kotak rumah
    for(int e = 0; e < tinggi; e++){
        for(int f = 0; f < c; f++){
        printf("\e[36m%c\e[0m", bata);
            Sleep(50);
            }
        for(d = 0; d < (tinggi*2); d++){ // tembok
        printf("\e[32m%c\e[0m", bata);
            Sleep(50);
            }
        printf("\n");
        }
    }
    printf("Mau membangun lagi? [y/n] : ");
    yesno();
    pola();
}

void game(){
    int input, lawan; 
    char tangan[3][10] = {"Gunting", "Batu", "Kertas"};
    system("cls");

    printf("\e[32mSUIT BERSAMA KOMPUTER!!\e[0m\n");
    printf("1 - Gunting\n2 - Batu\n3 - Kertas\nPilih (1-3): ");
    scanf("%d", &input);
    srand(time(NULL));
    lawan = rand() % (3-1+1)+1; //(angka akhir - angka awal + 1) + angka awal
    if(input != 1 && input != 2 && input != 3){
        printf("\e[31m[ALERT!]\e[0m Angka yang dimasukkan salah. Coba Lagi? (y/n) : ");
        yesno();
    }
    printf("\n");

    for(int i = 0; i < 3; i++){
        Sleep(500);
        printf("%s...", tangan[i]);
    }

    printf("!\n");
    printf("Anda : %s | Komputer : %s\n", tangan[input-1], tangan[lawan-1]);
    Sleep(700);
    if(input == lawan){
        printf("Seri!");
    } else if(input == 1 && lawan == 2){
        printf("\e[31mKau Kalah!");
    } else if(input == 2 && lawan == 3){
        printf("\e[31mKau Kalah!");
    } else if(input == 3 && lawan == 1){
        printf("\e[31mKau Kalah!");
    } else if(input == 1 && lawan == 3){
        printf("\e[32mKau Menang!");
    } else if(input == 2 && lawan == 1){
        printf("\e[32mKau Menang!");
    } else if(input == 3 && lawan == 2){
        printf("\e[32mKau Menang!");
    }
        
    printf("\n\e[0m\nMain lagi? (y/n) : ");
    yesno();
    game();
}

void kamus(){

}

void yesno(){
    char pilihan;
    scanf(" %c", &pilihan);
    switch(pilihan){
            case 'y':
            break;
            case 'n':
            menu();
            break;
            default:
            printf("\033[31m\n[ALERT]\033[0m Pilihan '%c' tidak valid. Pilih 'y' atau 'n' :", pilihan);
            yesno();
            }
}

void konfirmasikeluar(){
    char konfir;
            printf("\n\033[31mApakah yakin ingin keluar? [y/n]\033[0m");
            scanf(" %c", &konfir);
            switch(konfir){
                case 'n':
                menu();
                case 'y':
                for(int e = 0; e < 101; e++){
                    printf("%d%%", e);
                    Sleep(100);
                    printf("\b\b\b");
                }
                printf("\nSampai Jumpa!");
                Sleep(2000);
                exit(0);
                default:
                 printf("\033[31m\n[ALERT]\033[0m Pilihan '%c' tidak valid. Pilih 'y' atau 'n' :", konfir);
                 konfirmasikeluar();
            }
}
