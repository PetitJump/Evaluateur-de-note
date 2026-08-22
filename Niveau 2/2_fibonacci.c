#include <stdio.h>

int main(){
    int nombre_terme;
    int terme1 = 0;
    int terme2 = 1;
    int nouveau_terme;

    printf("Entrez le nombres de termes à afficher");
    scanf("%d", &nombre_terme);
    for (int i = 0; i < nombre_terme; i+= 1){
        printf("%d ", terme1);
        nouveau_terme = terme1 + terme2;
        terme1 = terme2;
        terme2 = nouveau_terme;
    }
    return 0;
}
