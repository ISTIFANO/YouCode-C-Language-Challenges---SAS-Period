#include <stdio.h>

int main() {
    double a, b;

    // Saisir les nombres
    printf("Entrez le premier nombre A : ");
    scanf("%lf", &a);
    printf("Entrez le deuxieme nombre B : ");
    scanf("%lf", &b);

    // Calculs
    double somme = a + b;
    double diff = a - b;
    double prod = a * b;
    double division;

    // La division
    if (b != 0) {
        division = a / b;
        printf("a / b = %lf\n", division);
    } else {
        printf(" Division par ZERO !\n");
    }

    // Affichage des résultats
    printf("a + b = %.2lf\n", somme);
    printf("a - b = %.2lf\n", diff);
    printf("a * b = %.2lf\n", prod);

    return 0;
}
