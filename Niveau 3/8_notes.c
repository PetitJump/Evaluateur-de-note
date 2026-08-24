#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Pour malloc

int* prises_de_notes(int taille){
    
    int* notes = malloc(taille * sizeof(int));

    for(int i=0; i<taille; i++){
        printf("\nNote %i : ", i);
        scanf("%i", &notes[i]);
    }
    return notes;
}

void min_max(int taille, int* notes){
    int max = notes[0];
    int min = notes[0];

    for(int i=1; i<taille; i++){
        if(notes[i] < min){min = notes[i];}
        if(notes[i] > max){max = notes[i];}
    }
    printf("\nNote maximal : %i", max);
    printf("\nNote minimal : %i", min);
}

void moyennes(int taille, int* notes){
    int total = 0;
    for(int i=0; i<taille; i++){
        total += notes[i];
    }
    int moyenne = total / taille;
    printf("\nLa moyenne des notes : %i", moyenne);

    int nb_audessus_moyenne = 0;
    for(int i=0; i<taille; i++){
        if(notes[i] > moyenne){nb_audessus_moyenne += notes[i];}
    }
    printf("\nNombres de notes au dessus de la moyenne : %i", nb_audessus_moyenne);
}

int main(void){
    int taille;
    printf("Combien de notes (sur 20) voulez vous donnez ? : ");
    scanf("%i", &taille);

    int* notes = prises_de_notes(taille);
    printf("\nNombres de notes : %i", taille);

    min_max(taille, notes);
    moyennes(taille, notes);
    
    free(notes);
    return 0;
}