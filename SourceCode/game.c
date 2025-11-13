#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void pilih();

//randomness
void main(){
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
        pilih();
    }
    printf("\n");

    for(int i = 0; i < 3; i++){
        usleep(500000);
        printf("%s...", tangan[i]);
    }

    printf("!\n");
    printf("Anda : %s | Komputer : %s\n", tangan[input-1], tangan[lawan-1]);
    sleep(1);
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
    pilih();

}

void pilih(){
    char ulang;
    scanf(" %c", &ulang);
    switch(ulang){
        case 'y':
        main();
        break;
        case 'n':
        exit(0);
        break;
    }
}
