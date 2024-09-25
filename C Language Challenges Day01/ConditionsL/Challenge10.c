#include <stdio.h>

int main() {
    int jour, mois, annee;
    char date[11]; 
    const char* nom[] = {
        "Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
        "Juillet", "Août", "Septembre", "Octobre", "Novembre", "Décembre"
    };

            // saisir la date
            printf("Entrez une date (JJ/MM/AAAA): ");

    scanf("%10s", date); 

    // Extraire a une char

    sscanf(date, "%d/%d/%d", &jour, &mois, &annee);

    // Affichage
    printf("%02d-%s-%d\n", jour, nom[mois - 1], annee);

    return 0;
}
