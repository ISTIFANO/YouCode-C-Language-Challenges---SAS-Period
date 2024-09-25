#include <stdio.h>

int main() {
    float longueur; 
    float largeur;  
    float surface;

    // Saisie
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);

    // Saisie 
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    //  surface
    surface = longueur * largeur;

    // Affichage 
    printf("La surface du rectangle avec une longueur de %f et une largeur de %f est : %f\n", 
           longueur, largeur, surface);

    return 0;
}
