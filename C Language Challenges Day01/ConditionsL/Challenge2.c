#include <stdio.h>

int main() {
    char c;
    
    // saisir les donnees
    printf("Entrez un caractere: ");
    scanf("%c", &c);
    
    // verification
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c est une voyelle.\n", c);
            break;
        default:
            printf("%c n est pas une voyelle.\n", c);
    }
    
    return 0;
}
