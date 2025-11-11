#include <stdio.h>
#include <stdlib.h>

void pencet();

void main(){
    system("cls");
    char username[2][8] = {"user1","user2"};
    char password[2][8] = {"usersatu","userdua"};
    char user[8], pass[8], ulang;
    int a, b, c = 0;
    
    printf("\e[1;33m _____________________________________\e[0m\n");
    printf("\e[1;33m|----------| TUGAS RANCANG |----------|\e[0m\n");
    printf("\e[1;33m =====================================\e[0m\n");

    printf("\nUsername : ");
    scanf("%8s", &user);
    printf("Password : ");
    scanf("%8s", &pass);

    for(int i=0; i<2;i++){
    a = strcmp(username[i],user);
    b = strcmp(password[i],pass);
    if(a == 0 && b == 0){
        c = 1;
        }
    }

    if( c == 1 ){
        printf("\nLogin Sukses! \n");
        pencet();
    } else {
        printf("\n\e[31m[ALERT]\e[0m Login gagal. Coba lagi? (y/n) :");
        scanf(" %c", &ulang);
        switch(ulang){
            case 'y':
            main();
            case 'n':
            exit(0);
        }
    }
}

void pencet(){
    char a=0;
    printf("\nTekan Enter untuk lanjut");
    getchar();
    while((a = getchar()) != '\n');
}


