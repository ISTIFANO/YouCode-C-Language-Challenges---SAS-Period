#include <stdio.h>

int main() {
    char chara;

    //  saisir un caractere
    printf("Entrez un caractere: ");
    scanf("%c", &chara);
    
    // Vérification
    
    if (chara >= 'A' && chara <= 'Z') {
        printf("Le caractère '%c' est majuscule.\n", chara);
    } else {

        printf("Le caractère '%c' neest pas  majuscule.\n", chara);
    }
    
    return 0;
}
