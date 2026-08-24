#include <stdio.h>
#include <string.h>

int plus_grand(int list[], int taille){
    int grand = list[0];
    for(int i=0; i<taille; i++){
        if(list[i] > grand){grand = list[i];}
    }
    return grand;
}

int main(void){
    int list[] = {2, 1, 5, 3, 9, 7, 3};
    int taille = sizeof(list) / sizeof(list[0]); // Taille de la list
    int rendu[taille];
    int plus_petit = list[0];
    int index_plus_petit = 0;
    int grand = plus_grand(list, taille);
    printf("Liste triée : ");

    for(int j=0; j<taille; j++){
        for(int i=0; i<taille; i++){
            if(list[i] < plus_petit){
                plus_petit = list[i];
                index_plus_petit = i; 
            }
        }
        list[index_plus_petit] = grand; // On enlève le nombre plus le plus petit
        rendu[j] = plus_petit;
        plus_petit = grand;
        printf(j==taille-1 ? "%i\n" : "%i, ", rendu[j]); // Tout ca pour une ',' ...
    }
    
    return 0;
}