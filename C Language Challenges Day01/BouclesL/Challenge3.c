#include <stdio.h>

int main() {
    int n;
    int S = 0; 

    // Demander un nombre entier à l'utilisateur
    printf("Entrez un nb entier positif : ");
    scanf("%d", &n);

    // Vérification
    if (n < 1) {
        printf("entrer un nombre  positif !!!!!!!!!!!!!!!!!!!!!!!.\n");
    } else {
        // Calculer la somme 
        for (int i = 1; i <= n; i++) {
            S += i; 
        }
        // Affichage
        printf("La somme des %d  nb   est : %d\n", n, S);
    }

    return 0;
}
