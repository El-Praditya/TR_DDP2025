#include <stdio.h>
#include <stdlib.h>
void pilih();

void main(){
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
                    usleep(5000);
            }
            for(i = 0; i < (tinggi - 1); i++){
                printf("\e[33m%c\e[0m", bata);
                    usleep(5000);
            }
            printf("\n");
        }
            //atap rumah
    for(a = 1; a <= tinggi; a++ ){
        for(b=tinggi; b > a; b--){ //spasi
            printf(" ");
                usleep(5000);
             }
        for(c = 1; c <= (a+(a-1)); c++){
            printf("\e[35m%c\e[0m", bata);
                usleep(5000);
             }
        for(d = 0; d < (tinggi*2); d++){ // tembok atap
            printf("\e[31m%c\e[0m", bata);
                usleep(5000);
             }
        printf("\n");
        }

            //kotak rumah
    for(int e = 0; e < tinggi; e++){
        for(int f = 0; f < c; f++){
        printf("\e[36m%c\e[0m", bata);
            usleep(5000);
            }
        for(d = 0; d < (tinggi*2); d++){ // tembok
        printf("\e[32m%c\e[0m", bata);
            usleep(5000);
            }
        printf("\n");
        }
    }
    pilih();
}

void pilih(){
char input;
printf("\nU - Ulang \nX - Keluar\nPilih : ");
scanf(" %c", &input);
switch(input){
    case'u':
    main();
    break;

    case'U':
    main();
    break;

    case'x':
    exit(0);
    break;

    case'X':
    exit(0);
    break;

    default:
    printf("\e[31m[ERROR!]\e[0m Masukkan 'U' atau 'X' untuk melanjutkan\n\n");
    pilih();
    }
}



