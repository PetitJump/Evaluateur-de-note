#include <stdio.h>
#include <string.h>

char* demander_prenom(){
    static char prenom[50];
    printf("Quel est ton prénom : ");
    scanf("%s", prenom);
    printf("Bonjour %s \n", prenom);
    return prenom;
}

int main(){
    int note;
    char rep[4] = "oui";
    char* prenom = demander_prenom();
    while (strcmp(rep, "oui") == 0)
    {
        printf("%s veuillez donner votre dernière note : ", prenom);
    scanf("%d", &note);
    if (note <= 9) {
        printf("Note insuffisant \n");
    }
    else if (note <= 13) {
        printf("Bof \n");
    }
    else if (note <= 16) {
        printf("Bien \n");
    }
    else if (note <= 20) {
        printf("Parfait \n");
    }
    else {
        printf("Erreur \n");
    }
    printf("Voulez vous continuer oui/non ? ");
    scanf("%s", rep);
    }
    
    return 0;
}
