#include <stdio.h>

int main() {
    float moyenne;

    // saisir la moyenne 
    printf("Entrez la moyenne de l eleve: ");
    scanf("%f", &moyenne);

    // Verification
    if (moyenne < 10) {

         printf("Mention: Recale\n");

    } else if (moyenne >= 10 && moyenne < 12) {

        printf("Passable\n");
       } else if (moyenne >= 12 && moyenne < 14) {
        printf("Assez Bien\n");

    } else if (moyenne >= 14 && moyenne < 16) {
        
        printf("Bien\n");
       } else {

        printf("Tres Bien\n");
    }

    return 0;
}
