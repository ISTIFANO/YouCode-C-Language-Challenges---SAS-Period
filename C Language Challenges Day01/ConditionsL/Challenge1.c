#include <stdio.h>

int main() {
    int nombre;

    // entrer un nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Verification
    if (nombre % 2 == 0) {
        printf("%d est un nombre pair.\n", nombre);
    } else {
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0;
}
