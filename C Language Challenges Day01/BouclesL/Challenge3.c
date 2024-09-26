#include <stdio.h>

int main() {
    int n;
    int S = 0; 

    
    printf("Entrez un nb entier positif : ");
    scanf("%d", &n);

 
    if (n < 1) {
        printf("entrer un nombre  positif !!!!!!!!!!!!!!!!!!!!!!!.\n");
    } else {
       
        for (int i = 1; i <= n; i++) {
            S += i; 
        }
        printf("La somme des %d  nb   est : %d\n", n, S);
    }

    return 0;
}
