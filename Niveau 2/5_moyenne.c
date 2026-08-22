#include <stdio.h>

int somme(int liste[], int taille){
    int total = 0;
    for (int i = 0; i < taille; i += 1) {
        total += liste[i];
    }
    return total;
}

int main(){
    int moyenne;
    int notes[] = {20, 13, 10, 0, 2, 20, 15}; // Total des notes
    int taille = sizeof(notes) / sizeof(notes[0]); // Taille du tableau (souvent sizeof(notes[0]) = 4) 
    moyenne = somme(notes, taille) / taille;
    printf("La moyenne : %d", moyenne);
    return 0;
}