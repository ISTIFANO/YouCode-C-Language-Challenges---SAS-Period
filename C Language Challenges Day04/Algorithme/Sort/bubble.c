#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    // Parcourir tous les éléments du tableau
    for (i = 0; i < n - 1; i++) {
        // Derniers i éléments sont déjà en place
        for (j = 0; j < n - i - 1; j++) {
            // Échanger si l'élément trouvé est plus grand que le suivant
            if (arr[j] > arr[j + 1]) {
                // Échange
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Tableau original: \n");
    print_array(arr, n);

    bubble_sort(arr, n);

    printf("Tableau trié: \n");
    print_array(arr, n);
    
    return 0;
}
