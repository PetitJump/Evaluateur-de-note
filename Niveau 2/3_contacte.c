#include <stdio.h>

struct Contact {
    char prenom[50];
    char numero_tel[20];
    int age;
};

int main(void){
    struct Contact contactes[3];

    for (int i = 0; i < 3; i += 1){
        printf("Entrez un prenom : \n");
        scanf("%s", contactes[i].prenom);

        printf("Entrez un numéro de telephone : \n");
        scanf("%s", contactes[i].numero_tel);

        printf("Entrez votre age : \n");
        scanf("%d", &contactes[i].age);

    }

    for (int i = 0; i < 3; i += 1){
        printf("Stats de la personne %d : \n", i+1);
        printf("Prenom : %s \n", contactes[i].prenom);
        printf("Age : %i \n", &contactes[i].age);
        printf("Numéro de tel : %s \n", contactes[i].numero_tel);
    }

    return 0;
}