#include <stdio.h>

int main() {
    int choix;
    do {
          printf("===============Menu===============\n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("0. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ajouter(); break;
            case 2: modifier(); break;
            case 3: supprimer(); break;
            case 4: afficher(); break;
            case 5: rechercher(); break;
        }
    } while (choix != 0);
    return 0;
}
