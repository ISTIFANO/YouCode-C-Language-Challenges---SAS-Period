#include <stdio.h>

int main() {
    int nb, i, min;
    printf("Donnez le nombre d'éléments du tableau : ");
    scanf("%d", &nb);
    int arr[nb];
    printf("Entrez les éléments du tableau :\n");
    for (i = 0; i < nb; i++) {
        scanf("%d", &arr[i]);
    }
    min = 0;
    for (i = 1; i < nb; i++) {
        if (arr[i] < arr[min]) {
            min = i;
        }
    }
        printf("L'index du nombre minimum est %d et sa valeur est %d\n", min, arr[min]);
    
    return 0;
}
