#include <stdio.h>

int main() {
    int nombre;
    char nombreStr[5]; 
    //  entrer un nombre
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);

    // Vérification
    if (nombre < 1000 || nombre > 9999) {
        printf("Erreur : le nombre doit être un entier à quatre chiffres.\n");
        return 1; 
    }

    // Convertir 
    sprintf(nombreStr, "%d", nombre);

    // Afficher 
    printf("L'inverse du nombre est : %c%c%c%c\n", nombreStr[3], nombreStr[2], nombreStr[1], nombreStr[0]);

    return 0;
}
