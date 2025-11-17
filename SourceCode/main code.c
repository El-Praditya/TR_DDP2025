#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
void menu();
void restoran();
    void pesanan();
int kamus();
    int sama();
void pola();
void game();
void yesno();
void author();
void konfirmasikeluar();

int loadonce = 0;
char makan[5][100] = {"Soto Ayam","Nasi Rames","Mie Goreng","Es Teh  ","Es Jeruk"};
int harga[5]= {6000,10000,11000, 3000, 4000};
int jumlah[5];
int porsi;
struct Istilah {
    char kata[50];
    char definisi[200];
};

//Loading Screen
void loading (){
    int i;
    int b;
    char word[] = "L O A ";
    char word1[] = "D I ";
    char word2[] = "N G";
    system("cls");
    printf("\033[33m[INFO]\033[0m Program is starting... \n\n");
    printf("\033[32m         ____ \n");
    printf("        |    | \n");
    printf("        |____| \n");
    printf("       _|____|_ \n");   
    printf("        /  ee`. \n");    
    printf("      .<     __O \n");   
    printf("     /\\ \\.-.' \\ \n");    
    printf("    J  `.|`.\\/ \\ \n");      
    printf("    | |_.|  | | | \n");
    printf("     \\__.'`.|-' / \n");
    printf("     L   /|o`--'\\ \n"); 
    printf("     |  /\\/\\/\\   \\ \n");           
    printf("     J /      `.__\\ \n");
    printf("     |/         /  \\ \n");     
    printf("      \\      .'`.  `. \n");  
    printf("    ____)_/\\_(____`.  `-._ \n");
    printf("   (___._/  \\_.___) `-.___ \033[0m\n\n\n");


    printf("\033[33m[INFO]\033[0m ");

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

    printf("\n\n\033[33m[INFO]\033[0m Welcome! Tekan enter untuk lanjut... ");
    getchar();
}


//Main; run loading dan login 
void main(){
    if(loadonce == 0){
    loading();
    loadonce++;
    }

    system("cls");
    char userpass[2][2][10] = {{"user1","user2"},{"usersatu","userdua"}};
    char user[10], pass[10];
    int a, b, c = 0;

    printf("\e[1;32m SELAMAT DATANG DI TUGAS RANCANG KAMI\e[0m\n");
    printf("\e[31m============= Kelompok 3 =============\e[0m\n");
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

//(103-147) Menu Utama
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
        } else if(pilihan == 5){
        konfirmasikeluar();
        } else if(pilihan == 6){
        author();
        break;
        }
    }
    while (pilihan < 1 || pilihan > 6);

}

//Restoran; dibagi dua fungsi: restoran() untuk menu dan porsi, dan pesanan() untuk komputasi total dan split bill
void restoran(){
    system("cls");
    int pilih;
    printf("           \e[1;31mMenu Restoran\e[0m           \n");
    printf("\e[31m==================================\e[0m\n");
    printf("\e[1;32m1\e[0m - Soto Ayam             Rp  6000 \n");
    printf("\e[1;32m2\e[0m - Nasi Rames            Rp 10000 \n");
    printf("\e[1;32m3\e[0m - Mie Goreng            Rp 11000 \n");
    printf("\e[1;32m4\e[0m - Es Teh                Rp  3000 \n");
    printf("\e[1;32m5\e[0m - Es Jeruk              Rp  4000 \n");
    printf("\e[31m==================================\e[0m\n");
    printf("Pilih 0 untuk menyelesaikan pesanan \n\n");
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
    printf("\e[1;31m Nama\t\tJumlah\t\t Total\t\e[0m\n");
    printf("\e[31m========================================\e[0m\n");
        for(int i = 0; i < 5; i++){
            total[i] = jumlah[i] * harga[i];
            if(jumlah[i] != 0){
            printf(" %s\t%dx\t\t %6d", makan[i], jumlah[i], total[i]);
            printf("\t\n");
            }
        }
        for(int i = 0; i < 5; i++){
            tagihan += total[i];
        }
    printf("\e[31m========================================\e\n[0m");
    printf("\e[32m\t\tTotal Bayar :\e[0m Rp %6d\t\n", tagihan);   
    printf("\e[31m========================================\e\n[0m");
    printf("Masukkan Jumlah Orang untuk Split Bill : ");
    scanf("%d", &orang);

    if(orang == 0){
        printf("\033[31m\n[ALERT]\033[0m Angka untuk split bill invalid. mohon buat pesanan lain... (Tekan enter untuk lanjut)");
            for(int i = 0; i < 5; i++){
            jumlah[i] = 0;
                }
            porsi = 0;
            getchar();
            getchar();
            restoran();
    } else {
    printf("\n\e[31m==============================================\e[0m");
    printf("\n\e[32m Jumlah Orang yang membayar \t:\e[0m %d Orang \t", orang);
    printf("\n\e[31m==============================================\e[0m");
    printf("\n\e[32m Total Bayar Per Orang \t\t:\e[0m Rp %6d \t", tagihan/orang);
    printf("\n\e[31m==============================================\e[0m");

    printf("\n\nTekan Enter untuk kembali ke menu...");
    getchar();
    getchar();
    menu();
    }
}

// Pola Grafis Membangun Rumah
void pola(){
system("cls");
    printf("\e[1;32m  PROGRAM MEMBANGUN RUMAH\e[0m\n");
    printf("\e[31m===========================\e[0m\n");

    int tinggi, a, b, c, d, e, f, g, h, i;
    char bata; 
    printf("Masukkan Tinggi Rumah: ");
    while(scanf("%d", &tinggi) != 1 || tinggi < 0){
        printf("\033[31m[ALERT]\033[0m Mohon masukkan hanya angka positif atau bulat\n");
        Sleep(500);
        getchar();
        printf("\nMasukkan Tinggi Rumah: ");
    }

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
    printf("\nMau membangun lagi? [y/n] : ");
    yesno();
    pola();
}

//Gunting Batu Kertas
void game(){
    int input, lawan; 
    char tangan[3][10] = {"Gunting", "Batu", "Kertas"};
    system("cls");

    printf("\e[32mSUIT BERSAMA KOMPUTER\e[0m\n");
    printf("\e[31m=====================\e[0m\n");
    printf("\e[1;32m1\e[0m - Gunting\n\e[1;32m2\e[0m - Batu\n\e[1;32m3\e[0m - Kertas\n");
    printf("\e[31m=====================\e[0m\n");
    printf("Pilih (1-3): ");
    scanf("%d", &input);
    srand(time(NULL));
    lawan = rand() % (3-1+1)+1; //(angka akhir - angka awal + 1) + angka awal
    if(input != 1 && input != 2 && input != 3){
        printf("\e[31m[ALERT!]\e[0m Angka yang dimasukkan salah. Coba Lagi? (y/n) : ");
        getchar();
        yesno();
        game();
    }
    printf("\n");
        Sleep(500);
        printf("\e[31mGunting...\e[0m");
        Sleep(500);
        printf("\e[33mBatu...\e[0m");
        Sleep(500);
        printf("\e[32mKertas!!\e[0m\n\n");
        Sleep(500);

    printf("Anda : %s | Komputer : %s\n\n", tangan[input-1], tangan[lawan-1]);
    Sleep(700);
    if(input == lawan){
        printf("\e[1;37mSeri!\e[0m");
    } else if(input == 1 && lawan == 2 || input == 2 && lawan == 3 || input == 3 && lawan == 1){
        printf("\e[31mKau Kalah!");
    } else if(input == 1 && lawan == 3 || input == 2 && lawan == 1 || input == 3 && lawan == 2){
        printf("\e[32mKau Menang!");
    } 
    printf("\n\e[0m\nMain lagi? (y/n) : ");
    yesno();
    game();
}

//Kamus; dibagi 2 fungsi: kamus() untuk menu utama kampus beserta fiturnya, dan compare() untuk membandingkan inputan user 
int kamus(){
    struct Istilah daftar[100];
    int jumlah = 0;
    int nav, i;
    char cari[50];
    system("cls");

do {
    printf ("\e[31m======= \e[32mKamus Sederhana\e[0m \e[31m=======\e[0m\n\n");

    printf ("\e[1;32m1.\e[0m Cari Kata\n");
    printf ("\e[1;32m2.\e[0m Tambah Kata Baru\n");
    printf ("\e[1;32m3.\e[0m Tampilkan Daftar Kata\n");
    printf ("\e[1;32m4.\e[0m Kembali Ke Menu Utama\n\n");
    printf ("Pilih menu: ");
    
    scanf ("%d", &nav);
    getchar();
    system("cls");

    switch(nav) {

        case 1: {
        char CariLagi;
        int Pilihan;

        do {
            if (jumlah == 0) {
                printf("\e[31m\nBelum ada kata tersimpan.\e[0m\n\n");
                printf("Kembali ke menu? (y/n): ");
                scanf(" %c", &Pilihan);

            if (Pilihan == 'y' || Pilihan == 'Y') {
                break;
            } 
            else if (Pilihan == 'n' || Pilihan == 'N') {
                exit(0);
            } 
            else {
                printf("Pilihan tidak valid!\n");
                printf("Tekan Enter untuk kembali...");
                getchar();
                break;
            }


            } else {
                printf ("\nMasukkan kata yang dicari: ");
                scanf ("%s", cari);
                getchar();

        for (i = 0; i < jumlah; i++) {
            if (sama(cari, daftar[i].kata)) {
                printf ("\n");
                printf ("\e[32mArtinya:\e[0m %s\n", daftar[i].definisi);
                break;
            }
        }

        if (i == jumlah) {
            printf ("\n\e[31m=== Kata tidak ditemukan. ===\e[0m\n");
            }
        }

        printf ("\nMau cari kata lagi? (y/n): ");
        scanf (" %c", &CariLagi);
        
        } while (CariLagi == 'y' || CariLagi == 'Y');  
            printf ("\nTekan Enter untuk kembali ke menu...");
            getchar();
            getchar();
            system("cls");
            break;
    }


        case 2: {
        char tambah;

        do {
            printf ("\e[31m====== INPUT KATA ======\e[0m\n");
            printf ("Masukkan kata baru   :  ");
            scanf ("%s", daftar[jumlah].kata);
            getchar();

            printf ("Masukkan definisinya :  ");
            scanf ("%[^\n]", daftar[jumlah].definisi);
            getchar();
            printf ("\n");

            jumlah++;
            printf ("\e[31m=== \e[32mKata berhasil ditambahkan!\e[0m \e[31m===\e[0m\n");
            
            printf ("Mau tambah data lagi? (y/n) :  ");
            scanf (" %c", &tambah);
            

            system("cls");
            } while (tambah == 'y' || tambah == 'Y');
            {
                printf ("Tekan Enter untuk Kembali ke Menu...");
                getchar();
                system("cls");
                break;
            }
        }

        case 3:
            if (jumlah == 0){
            printf ("\n\e[31mBelum ada data kata yang tersimpan.\e[0m\n");
            }  else {
                printf ("\e[31m===== \e[32mDaftar Kata\e[0m \e[31m=====\e[0m\n");
                for (i=0; i<jumlah; i++){
                printf ("%d. %s \n-> %s\n\n", i+1, daftar[i].kata, daftar[i].definisi);
                }
            }

            printf ("Tekan Enter untuk Kembali ke Menu...");
            getchar();
            system("cls");
            break;


        case 4:
            printf ("\n\e[31m=== \e[32mTerima kasih\e[0m \e[31m===\e[0\n");
            menu();
            break;

        default:
            printf ("\nMenu tidak ada.\n");
    }

} while (nav != 4);

return 0;
}

int sama (char a[], char b[]) {
    int i = 0;
        while (a[i] != '\0' && b[i] != '\0') {
            if (a[i] != b[i]) {
            return 0;
            }
        i++;
        }
    return (a[i] == '\0' && b[i] == '\0');
}


//Fungsi untuk konfirmasi keluar dari program
void konfirmasikeluar(){
    char konfir;
            printf("\n\033[31mApakah yakin ingin keluar? [y/n]\033[0m");
            scanf(" %c", &konfir);
            switch(konfir){
                case 'n':
                menu();
                case 'y':
                printf("\n\n\t\t\tTerimakasih dan Sampai Jumpa!");
                Sleep(3000);
                exit(0);
                default:
                 printf("\033[31m\n[ALERT]\033[0m Pilihan '%c' tidak valid. Pilih 'y' atau 'n' :", konfir);
                 konfirmasikeluar();
            }
}

void author(){

    system("cls");
    Sleep(900);

    printf("\033[33m\n[INFO]\033[0m Retrieving Name...\n");
    Sleep(1600);

    printf("\033[33m[INFO]\033[0m Retrieving Student ID...\n");
    Sleep(1600);

    printf("\033[33m[INFO]\033[0m Retrieving GitHub Profile...\n");
    Sleep(1600);

    printf("\033[33m[INFO]\033[0m Retrieving Personal Quote...\n");
    Sleep(1600);

    printf("\033[33m[INFO]\033[0m Rendering profile...\n");
    Sleep(2600);

    printf("\033[32m[SUCCESS]\033[0m Operation successful...\n");
    Sleep(4200);

    printf("\033[32m[SUCCESS]\033[0m System online...\n\n");
    Sleep(1300);

    printf("\033[31m    ___    __                __     __  _______\n");
    printf("   /   |  / /_  ____  __  __/ /_   / / / / ___/\n");
    printf("  / /| | / __ \\/ __ \\/ / / / __/  / / / /\\__ \\ \n");
    printf(" / ___ |/ /_/ / /_/ / /_/ / /_   / /_/ /___/ / \n");
    printf("/_/  |_/_.___/\\____/\\__,_/\\__/   \\____//____/\033[0m  \n\n");
    printf("\033[31m====================KELOMPOK 3.0=====================\033[0m\n");
 
    printf("\n\n\033[32m=====================================================\033[0m\n");
    printf("\033[31mDEVELOPER:\033[0m\t \033[32mTeofilus Tri Adinugraha Moelyono\033[0m \n");
    printf("\033[31mNIM:\033[0m\t \t \033[32m672025093\033[0m \n");
    printf("\033[31mGITHUB: \033[0m\t \033[32mgithub.com/tridelta102\033[0m \n");
    printf("\033[31mQUOTE:\033[0m \t \t \033[32mGapapa. Aku tetap happy saja\033[0m\n");
    printf("\033[32m-----------------------------------------------------\033[0m\n");
    printf("\033[31mDEVELOPER:\033[0m\t \033[32mHanny Sokha Anggana\033[0m \n");
    printf("\033[31mNIM:\033[0m\t \t \033[32m672025096\033[0m \n");
    printf("\033[31mGITHUB:\033[0m \t \033[32mgithub.com/Sokhatok17\033[0m \n");
    printf("\033[31mQUOTE: \033[0m\t \t \033[32mTak pendem e dewe wae gen dadi telo\033[0m\n");
    printf("\033[32m-----------------------------------------------------\033[0m\n");
    printf("\033[31mDEVELOPER:\033[0m\033[0m\t \033[32mNathanael Afarrel Praditya\033[0m \n");
    printf("\033[31mNIM:\033[0m\t \t \033[32m672025101\033[0m \n");
    printf("\033[31mGITHUB:\033[0m \t \033[32mgithub.com/El-Praditya\033[0m \n");
    printf("\033[31mQUOTE:\033[0m \t \t \033[32mI Love My Family\033[0m\n");
    printf("\033[32m=====================================================\033[0m\n\n");

    printf("Tekan enter untuk kembali ke menu...");
    getchar();
    getchar();
    menu();
}

//fungsi yang dipanggil setiap ada pilihan yes/no [y/n]
void yesno(){
    char pilihan;
    scanf(" %c", &pilihan);
    switch(pilihan){
            case 'y':
            break;
            case 'Y':
            break;
            case 'n':
            menu();
            break;
            case 'N':
            menu();
            break;
            default:
            printf("\033[31m\n[ALERT]\033[0m Pilihan '%c' tidak valid. Pilih 'y' atau 'n' :", pilihan);
            yesno();
            }
}
