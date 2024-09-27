#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
int longueur = 4;
int min = INT_MAX;
int tab[23];

printf(" entrer %d valeurs :\n", longueur);
for (int i = 0; i < longueur; i++) {
printf("Valeur %d : ", i + 1);
scanf("%d", &tab[i]);
}
for (int i = 0; i < longueur; i++) {
if (tab[i] < min) {
min = tab[i];
}
}
printf("Minimum : %d\n", min);
return 0;
}
