#include <stdio.h>

int main() {
    float km, Ms;

    printf("Entrez la vitesse en km par heure km/h : ");
    scanf("%f", &km);

    Ms = km * 0.27778;

    printf("La vitesse en m par seconde m/s est : %.2f\n", Ms);
    
    return 0;
}
