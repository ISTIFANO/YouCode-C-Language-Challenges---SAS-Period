#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, z1; 
    float x2, y2, z2;
    float distance;    

    // Saisie
    printf("Entrez les coordonnées du premier point (x1, y1, z1) : ");
    scanf("%f %f %f", &x1, &y1, &z1);

    // Saisie 2
    printf("Entrez les coordonnées du deuxième point (x2, y2, z2) : ");
    scanf("%f %f %f", &x2, &y2, &z2);

    // Calcul de la distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    // Affichage 
    printf("La distance entre les points (%f, %f, %f) et (%f, %f, %f) est : %f\n", 
           x1, y1, z1, x2, y2, z2, distance);

    return 0;
}
