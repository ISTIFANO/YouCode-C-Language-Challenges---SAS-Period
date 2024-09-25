#include <stdio.h>

int main() {
    int n;
    int fac = 1; /

    // Demander un nb entier
    printf("Entrez un nb entier positif : ");

      scanf("%d", &n);

    // Vérification
    if (n < 0) {
        printf(" error .\n");
    } else {

        // Calcul
        for (int i = 1; i <= n; i++) {
            fac *= i;
             }
        // Affichage
              printf("%d! = %d\n", n, fac);
    }

    return 0;
}
