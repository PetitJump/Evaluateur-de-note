#include <stdio.h>
#include <string.h>

char* demander_phrase(void){
    char phrase[50];
    printf("Bonjour, veuillez ecrire une phrase (50 caractere max)");
    fgets(phrase, 50, stdin);
    return phrase;
}

int main(void){
    
    return 0;
}