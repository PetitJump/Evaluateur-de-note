#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int nombre = (rand() % 100) + 1;
    int devine;
    int essaie = 1;
    printf("Donne un premier chiffre : ");
    scanf("%d", &devine);

    while(nombre != devine){
        essaie += 1;
        if(nombre > devine){
            printf("Trop petit \n");
        }
        else {
            printf("Trop grand\n");
        }
        printf("Choisir un nouveau chiffre : ");
        scanf("%d", &devine);
    }
    printf("Bravo vous avez trouver ! \n");
    printf("Vous avez trouver en %d essaies !", essaie);
    return 0;
}
