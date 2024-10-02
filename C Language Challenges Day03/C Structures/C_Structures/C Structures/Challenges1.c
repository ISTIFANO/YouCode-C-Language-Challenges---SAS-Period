#include <stdio.h>

struct Personne {
    char nom[50];
    int age;
};

int main() {
    struct Personne p1;

    printf("Entrez le nom: ");
    scanf("%s", p1.nom);

    printf("Entrez l'âge: ");
    scanf("%d", &p1.age);

    printf("Nom: %s\n", p1.nom);
    printf("Age: %d\n", p1.age);

    return 0;
}
