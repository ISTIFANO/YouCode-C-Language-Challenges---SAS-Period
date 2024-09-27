#include <stdio.h>

int main() {
 int n, i;

printf("Entrez le nombre d elements du tableau : ");
 scanf("%d", &n);
 int Arr[n];
 int Arr2[n];

 printf("Entrez les elements du tableau :\n");
 for (i = 0; i < n; i++) {
  printf("element %d : ", i + 1);
  scanf("%d", &Arr[i]);
 }
 for (i = 0; i < n; i++) {
  Arr2[i] = Arr[i];
 }
 printf("\nTableau Arr :\n");
 for (i = 0; i < n; i++) {
  printf("%d ", Arr[i]);
 }
 printf("\n");
 printf("Tableau copie :\n");
 for (i = 0; i < n; i++) {
  printf("%d ", Arr2[i]);
 }
 printf("\n");

 return 0;
}
