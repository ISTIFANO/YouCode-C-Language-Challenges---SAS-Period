#include <stdio.h>

int main() {
    float km, yards;

    //  entrer la distance en kilometres
    printf("Entrez la distance en kilomètres : ");
    scanf("%f", &km);

    // Conversion
    yards = km * 1093.61;

    // Affichage
    printf("La distance en yards est : %.2f yards\n", yards);

    return 0;
}
