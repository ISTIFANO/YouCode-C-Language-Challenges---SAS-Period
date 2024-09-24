#include <stdio.h>

int main() {
    int nb;

    // Demander entier
    printf("Entrez un nb entier : ");
    scanf("%d", &nb);

    // Afficher la valeur hexadécimale
    printf("Valeur hexadecimale : 0x%X\n", nb);

    /* Afficher 
    printf("valeur binaire : ");
    for (int i = 31; i >= 0; i--) { // 32 bits
        printf("%d", (nb >> i) & 1);
    } */
    printf("\n");

    return 0;
}
