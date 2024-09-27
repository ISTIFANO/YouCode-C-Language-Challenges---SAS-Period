#include <stdio.h>

int main() {
  int nb, i, j, temp;
  printf("Donnez le nombre d'elements du tableau : ");
  scanf("%d", &nb);
  int arr[nb];
  printf("Entrez les elements du tableau :\n");
  for (i = 0; i < nb; i++) {
   scanf("%d", &arr[i]);
  }
  for (i = 0; i < nb - 1; i++) {
   for (j = i + 1; j < nb; j++) {
  if (arr[i] > arr[j]) {
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
  }
   }
  }
  printf(" croissant :\n");
  for (i = 0; i < nb; i++) {
   printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
