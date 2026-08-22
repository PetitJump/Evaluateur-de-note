#include <stdio.h>
#include <string.h>

char* demander_phrase(void){
    static char phrase[102];
    int taille = 101;
    printf("Bonjour, veuillez ecrire une phrase (100 caractere max) : ");
    while(taille > 100){
        fgets(phrase, 102, stdin); // Prend l'entierter de la phrase avec un max de 102 caractère. Si ca dépasse ca va également mettre '\n' à la fin.
        taille = strlen(phrase);
    };  

    if(phrase[taille - 1] == '\n'){phrase[taille - 1] = '\0'; taille -= 1;}; // Enlève le '\n' si il y est à la fin
    printf("\nTaille de la phrase : %i caractères", taille);
    return phrase;
}

int mots(char phrase[]){
    int mots = 1; // Il y a au moins 1 mot

    for(int i = 0; i < strlen(phrase); i += 1){
         if(phrase[i] == ' '){mots +=1;};
    };
    printf("\nNombres de mots : %i", mots);
    return mots;
}

int voyelles(char phrase[]){
    char liste_voyelles[] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    int nombre = 0;
    for(int i = 0; i < strlen(phrase); i += 1){
        for(int j = 0; j < 12; j += 1){
            if(phrase[i] == liste_voyelles[j]){nombre += 1;};
        };
    };

    printf("\nNombres de voyelles : %i", nombre);
    return nombre;
}

char* mot_le_plus_long(char phrase[]){ // Fonction buger
    static char mot_long[101] = "";
    char mot[101] = "";

    phrase[strlen(phrase)] = ' ';

    for(int i = 0; i < strlen(phrase); i += 1){
        if(phrase[i] != ' '){
            mot[i] = phrase[i]; // On met le mot petit a petit
        }
        else{
            mot[i] = '\0'; // On ferme le mot
            if(strlen(mot) > strlen(mot_long)){
                char mot_long = mot;
            };
            char mot[101] = "";
        };
    };
    return mot_long;
}

int main(void){
    char* phrase = demander_phrase();
    int nb_mots = mots(phrase);
    int nb_voyelles = voyelles(phrase);
    char* mot_long = mot_le_plus_long(phrase); // Fonction buger

    printf("\n"); // Dernier saut de ligne
    return 0;
}