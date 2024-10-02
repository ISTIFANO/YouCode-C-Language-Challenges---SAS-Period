#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, min_idx, temp;

    // Parcourir tous les éléments du tableau
    for (i = 0; i < n - 1; i++) {
        // Trouver l'index du plus petit élément dans la partie non triée
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Échanger le plus petit élément trouvé avec l'élément à la position i
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Fonction pour afficher le tableau
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Tableau original: \n");
    print_array(arr, n);

    selection_sort(arr, n);

    printf("Tableau trié: \n");
    print_array(arr, n);

    return 0;
}
