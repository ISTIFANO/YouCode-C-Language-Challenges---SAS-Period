#include <stdio.h>


int main() {
    int annee, choix;

    //  saisir une annee 
    printf("Entrez une annee : ");
    scanf("%d", &annee);

    do {
      printf("\n===**************** Conversion**************** ===\n");
    printf("1.  mois\n");
    printf("2.  jours\n");
    printf("3.  heures\n");
    printf("4.  minutes\n");
    printf("5.  secondes\n");
    printf("6.  Quitter\n");
    printf("donner  une option: ");


        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("%d annee  = %d mois\n", annee, annee * 12);
                break;
            case 2:
                printf("%d annee  = %d jours\n", annee, annee * 365);
                break;
            case 3:
                printf("%d annee  = %d heures\n", annee, annee * 365 * 24);
                break;
            case 4:
                printf("%d annee  = %d minutes\n", annee, annee * 365 * 24 * 60);
                break;
            case 5:
                printf("%d annee  = %d secondes\n", annee, annee * 365 * 24 * 60 * 60);
                break;
            case 6:
                printf(" null !\n");
                break;
            default:
                printf(" invalide.\n");
        }
    } while (choix != 6);

    return 0;
}