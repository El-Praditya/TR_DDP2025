#include <stdio.h>

int main (){
    int pilihan;

// ASCII
    printf("\n\033[31m              _                                 \033[0m\n");
    printf("\033[31m  /\\/\\   __ _(_)_ __     /\\/\\   ___ _ __  _   _ \033[0m\n");
    printf("\033[31m /    \\ / _` | | '_ \\   /    \\ / _ \\ '_ \\| | | |\033[0m\n");
    printf("\033[31m/ /\\/\\ \\ (_| | | | | | / /\\/\\ \\  __/ | | | |_| |\033[0m\n");
    printf("\033[31m\\/    \\/\\__,_|_|_| |_| \\/    \\/\\___|_| |_|\\__,_|\033[0m\n\n");
    printf("\033[31m========================v.0.3==========================\033[0m\n\n");
                                                
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
            printf("\033[31m\n[ALERT]\033[0m Pilihan %d tidak valid. Masukan angka 1 - 6\n", pilihan);
        }
        
        else if (pilihan == 5){
            printf("\033[31mapakah yakin ingin keluar? [y/N]\033[0m")
            break;
        }

    }
    while (pilihan < 1 || pilihan > 6);
    

    return 0;
}

