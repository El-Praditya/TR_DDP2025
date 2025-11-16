#include <stdio.h>
#include <windows.h>

int main (){
    int i;
    int b;
    char word[] = "L O A ";
    char word1[] = "D I ";
    char word2[] = "N G";

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

    printf("\n\n\033[33m[INFO]\033[0m Welcome! Tekan enter untuk lanjut...\n");
    getchar();

    //Sleep(2000);

    return 0;
}
