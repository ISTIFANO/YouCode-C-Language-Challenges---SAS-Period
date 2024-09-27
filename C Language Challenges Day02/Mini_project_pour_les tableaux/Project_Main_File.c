#include <stdio.h>
#include <string.h>

char titles[50];
char authors[50];
float prices[50];
int quantities[50];
int bookCount = 0;

int main() {
    int choice;

    do {
 printf("\n~~~~~~~~~~~~~~~~~~~~ Gestion de Stock de Librairie~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ---\n");
  printf("1.__________________ Ajouter un livre\n");
  printf("2.__________________ Afficher tous les livres\n");
  printf("3.__________________ Rechercher un livre\n");
  printf("4.__________________ Mettre à jour la quantité d'un livre\n");
  printf("5.__________________ Supprimer un livre\n");
  printf("6.__________________ Afficher le nombre total de livres en stock\n");
  printf("0.__________________________________________________________________________ Quitter\n");
  printf("Entrez votre choix: ");
  scanf("%d", &choice);

       
    } while (choice != 0);
    
    return 0;
}
