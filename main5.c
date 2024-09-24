#include <stdio.h>

int main() {
    float tmp;

    // remplir
    printf("Entrez la tmp en Celsius : ");
    scanf("%f", &tmp);

    //  l etat de l eau
    if (tmp < 0) {
        printf("etat de l eau a %.2f C est : Solide\n", tmp);

    } else if (tmp >= 0 && tmp < 100) {

        printf(" etat de l eau à %.2f C est : Liquide\n", tmp);
    } else {

        printf(" etat de l eau à %.2f C est : Gaz\n", tmp);
    }

    return 0;
}
