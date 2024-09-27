#include <stdio.h>

int main() {
    int nb;
int i;
    // Demander un nombre 
    printf("Entrez un nombre: ");
    scanf("%d", &nb);

    // la table de multiplication

    printf("Table de multiplication de %d:\n", nb);

        for (i = 1; i <= 10; i++) {

                printf("%d * %d = %d\n", nb, i, nb * i);
    }

    return 0;
}
