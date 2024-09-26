#include <stdio.h>

int main() {
    int n = 7;
int nb2;
    for (int i = 1; i <= n; i++) {
        // Affichage 
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        // Affichage
        for (nb2 = 1; nb2 <= (2 * i); nb2++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
