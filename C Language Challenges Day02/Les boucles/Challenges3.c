#include <stdio.h>

int main() {
    int n,i;
    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);
    printf("Les %d premiers nombres impairs sont : ", n);
    for (i = 0; i < n; i++) {
        printf("%d", 2 * i + 1);
        if (i < n - 1) {
            printf(", "); 
        }
    }
    printf("\n"); 
    return 0;
}
