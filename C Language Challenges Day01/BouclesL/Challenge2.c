#include <stdio.h>

int main() {
    int n;
    int i;
    int fac = 1; 

    // Demander un nb entier
    printf("Entrez un nb entier positif : ");

      scanf("%d", &n);
    // Vérification
    if (n < 0) {
        printf(" error .\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fac *= i;
             }
              printf("%d! = %d\n", n, fac);
    }

    return 0;
}
