#include <stdio.h>

int main() {
    //  variables
    float num1, num2, num3;
    float poids1 = 2.0, poids2 = 3.0, poids3 = 5.0;
    float moy;

    //  saisir trois nombres
    printf("Entrez le premier nombre : ");
                        scanf("%f", &num1);
    printf("Entrez le deuxième nombre : ");
                                scanf("%f", &num2);
    printf("Entrez le troisième nombre : ");
                               scanf("%f", &num3);

    //  la moyenne 
    float sumP = (num1 * poids1) + (num2 * poids2) + (num3 * poids3);
    float sum = poids1 + poids2 + poids3;
    moy = sumP / sum;

    // Affichage
    printf("La moyenne ponderee  : %.2f\n", moy);

    return 0;
}
