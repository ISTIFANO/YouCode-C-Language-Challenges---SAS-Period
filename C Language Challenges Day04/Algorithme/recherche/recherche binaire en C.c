#include <stdio.h>

int binary_search(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculer l'index du milieu

        // Vérifier si l'élément est présent au milieu
        if (arr[mid] == target) {
            return mid; // Retourner l'index si trouvé
        }
        // Si l'élément est plus petit, ignore la moitié droite
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // Si l'élément est plus grand, ignore la moitié gauche
        else {
            right = mid - 1;
        }
    }

    return -1; // Retourner -1 si l'élément n'est pas trouvé
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60}; // Tableau trié
    int n = sizeof(arr) / sizeof(arr[0]); // Taille du tableau
    int target = 30; // Élément à rechercher

    int result = binary_search(arr, n, target); // Appel de la fonction de recherche

    if (result != -1) {
        printf("Élément %d trouvé à l'index: %d\n", target, result);
    } else {
        printf("Élément %d non trouvé.\n", target);
    }

    return 0;
}
