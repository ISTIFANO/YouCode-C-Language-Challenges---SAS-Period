#include <stdio.h>
#include <math.h>            

int main() {
    double a, b, c, MG;

    // trois nombres
    printf("entrez le premier nombre : ");
    scanf("%lf", &a);

    printf("entrez le deuxieme nombre : ");

    scanf("%lf", &b);
    printf("entrez le troisieme nombre : ");
    scanf("%lf", &c);

    // la moyenne 
    MG = pow(a * b * c, 1.0 / 3.0);

    // Affichage
    printf("La moyenne geometrique  : %.2lf\n", MG);

    return 0;
}
