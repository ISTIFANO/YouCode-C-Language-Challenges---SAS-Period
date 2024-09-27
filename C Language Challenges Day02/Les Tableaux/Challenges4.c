#include <stdio.h>
#include <stdlib.h>

int main() {
 int longueur = 3;
 int max = 0;
 int position = -1;
 int tab[23];
 printf("Veuillez entrer %d valeurs :\n", longueur);
 for (int i = 0; i < longueur; i++) {
  printf("Valeur %d : ", i + 1);
  scanf("%d", &tab[i]);
 }

 for (int i = 0; i < longueur; i++) {
  if (tab[i] > max) {
max = tab[i];
position = i;
  }
 }

 printf("Maximum : %d\nPosition : %d\n", max, position);
 return 0;
}
