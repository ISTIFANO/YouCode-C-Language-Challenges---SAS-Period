#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    //  saisir les 2  nombres 
    printf("Entrez le premier entier: ");
    scanf("%d", &num1);
    
    printf("Entrez le deuxieme entier: ");
    scanf("%d", &num2);
    
    // la somme
    sum = num1 + num2;
    
    // Verification
    if (num1 == num2) {
        // triple de la somme
        printf("Les deux nombres sont identiques.\n");
        printf("Le triple de leur somme est: %d\n", 3 * sum);
    } else {
        // la somme normale
        printf("La somme des deux nombres est: %d\n", sum);
    }
    
    return 0;
}
