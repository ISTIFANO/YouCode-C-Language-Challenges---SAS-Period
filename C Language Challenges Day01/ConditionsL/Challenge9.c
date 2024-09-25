#include <stdio.h>

int main() {
    char caractere;

    //  saisir un caractere
    printf("Entrez un caractere: ");
    scanf("%c", &caractere);

    // Vérification
    if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z')) {

        // majuscule ou minuscule

 if (caractere >= 'A' && caractere <= 'Z') {

            printf("'%c' est  majuscule.\n", caractere);
 } else {
            printf("'%c' est  minuscule.\n", caractere);
        }
    } else {
        printf("'%c' n'est pas  alphabet.\n", caractere);
    }

    return 0;
}
