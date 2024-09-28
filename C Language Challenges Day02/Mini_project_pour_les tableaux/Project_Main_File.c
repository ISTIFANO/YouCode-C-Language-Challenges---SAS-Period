#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int op;
    char reponse = 'y';
    int addL = 0;
    int i, j;

    char T[50][25];
    char auteur[50][25];
    int quantite[50];
    float prix[50];

    while (reponse == 'y' || reponse == 'Y') {
        printf("\n\n");
        printf("========--**** GESTION D'UN STOCK DE LIVRES ****--========\n");
        printf("=========================================================\n");
        printf("| 1 ********* Ajouter un livre au stock\n");
        printf("| 2 ********* Afficher tous les livres disponibles\n");
        printf("| 3 ********* Rechercher un livre par son titre\n");
        printf("| 4 ********* Mettre a jour la quantite d'un livre\n");
        printf("| 5 ********* Supprimer un livre du stock\n");
        printf("| 6 ********* Afficher le nombre total de livres en stock\n");
        printf("| 7 ********* Quitter\n");
        printf("=========================================================\n");

        printf("\n\t=> Choisissez une option : ");
        scanf("%d", &op);

        switch (op) {
  case 1:
      if (addL < 50) {
printf("\n\n ***** Ajouter un livre au stock\n");
printf("\n Titre : ");
scanf("%s", T[addL]); 

printf("\n Auteur : ");
scanf("%s", auteur[addL]); 

printf("\n Quantite : ");
scanf("%d", &quantite[addL]);

printf("\n Prix : ");
scanf("%f", &prix[addL]);

addL++;
printf("\n Livre ajoute avec succes !\n");
      } else {
printf("\n Stock plein !\n");
      }
      break;

  case 2:
      printf("\n");
      if (addL == 0) {
printf("\n Aucun livre disponible.\n");
      } else {
printf("========-- Livres Disponibles (%d) --========\n", addL);
for (i = 0; i < addL; i++) {
    printf("-------------------------------------------------\n");
    printf("\t\tLivre %d\n", i + 1);
    printf("****************************\n");
    printf("Titre    : %s\n", T[i]);
    printf("Auteur   : %s\n", auteur[i]);
    printf("Quantite : %d\n", quantite[i]);
    printf("Prix     : %.2f DH\n", prix[i]);
    printf("*******************************\n");
}
      }
      break;

  case 3: {
      char TR[25];
      int f = 0;
      printf("========--**** Rechercher un livre par son titre. ****--========\n");
      printf("donner moi le titre ");
      scanf("%s", TR);

      for (i = 0; i < addL; i++) {
if (strcmp(T[i], TR) == 0) {
    f = 1;
    printf("Le livre a ete trouve.\n");
    break;
}
      }
      if (!f) {
printf("Livre non trouve.\n");
      }
      break;
  }

  case 4: {
      char TMS[25];
      int f = 0;
      printf("========--**** Mettre a jour la quantite d'un livre. ****--========\n");
      printf("donner moi le titre ");
      scanf("%s", TMS);

      for (i = 0; i < addL; i++) {
if (strcmp(T[i], TMS) == 0) {
    printf("Nouvelle quantite : ");
    scanf("%d", &quantite[i]);
    printf("Quantite mise a jour.\n");
    f = 1;
    break;
}
      }
      if (!f) {
printf("Livre non trouve.\n");
      }
      break;
  }

  case 5: {
      char Supp[25];
      int f = 0;
      printf("========--**** Supprimer un livre du stock ****--========\n");
      printf("donner moi le titre de livre ");
      scanf("%s", Supp);

      for (i = 0; i < addL; i++) {
if (strcmp(T[i], Supp) == 0) {
    f = 1; 
    for (j = i; j < addL - 1; j++) {
        strcpy(T[j], T[j + 1]);
        strcpy(auteur[j], auteur[j + 1]);
        quantite[j] = quantite[j + 1];
        prix[j] = prix[j + 1];
    }
    addL--; 
    printf("Livre \"%s\" supprime avec succès.\n", Supp);
    break;
}
      }
      if (!f) {
printf("Livre \"%s\" non trouve dans le stock.\n", Supp);
      }
      break;
  }

  case 6:
      printf("Nombre total de livres en stock : %d\n", addL);
      break;

  case 7:
      printf("Au revoir!\n");
      return 0;

  default:
      printf("Option invalide, veuillez reessayer.\n");
        }

        printf("\n Continuer ? (y) / (n) : ");
        scanf(" %c", &reponse);
    }
    return 0;
}
