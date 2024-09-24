#include <stdio.h>

int main() {
    float D, K;

    // remplir 
    printf("Entrez la temperature en D : ");
    scanf("%f", &D);

    // Conversion
    K = D + 273.15;

    // Afficher
    printf("La temperature en K est : %.2f K\n", K);

    return 0;
}
