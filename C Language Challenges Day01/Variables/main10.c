#include <stdio.h>
#include <math.h>

int main() {
    float rayon;  
    float volume;   
    const float P = 3.14; // Valeur de π

    //rayon X
    printf("Entrez le rayon  : ");
    
    scanf("%f", &rayon);

    // volume
    volume = (4.0 / 3.0) * P * pow(rayon, 3);

    // Affichage 
    printf("Le volume  avec un rayon de %f est : %f\n", rayon, volume);

    return 0;
}
