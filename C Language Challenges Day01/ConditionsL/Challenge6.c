#include <stdio.h>

int main() {
    float nombre;
    
    // saisir un nombre
    printf("Entrez un nombre: ");
    scanf("%f", &nombre);
    
    // Verification

    if (nombre > 0) {
        
        printf("Le nombre %.2f est positif.\n", nombre);

    } else if (nombre < 0) {

        printf("Le nombre %.2f est negatif.\n", nombre);
    } else {
        printf("Le nombre est nul.\n");
    }
    
    return 0;
}
