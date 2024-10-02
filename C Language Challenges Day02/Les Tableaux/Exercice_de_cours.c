<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab[5],i,min,som=0,som2=0,max=0;
  for(i=0;i<5;i++){
    printf("donner la valeur de case %d \t",i+1);
    scanf("%d",&tab[i]);
  }
  min=tab[0];
  for(i=1;i<5;i++)
  {
      if(min>tab[i]){
        min=tab[i];
      }
  }
  for(i=0;i<5;i++){
      som+=tab[i];
  }
  som=som-min;
  printf("%d",som);
   max=tab[0];
  for(i=1;i<5;i++)
  {
      if(max<tab[i]){
        min=tab[i];
      }
  }
  for(i=0;i<5;i++){
      som2+=tab[i];
  }
  som2=som2-max;
  printf("%d",som2);


    return 0;
}

#include <stdio.h>

int main() {
    int n, i;
    float nb, max;
    printf("Combien de nombres voulez-vous entrer ? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 1;
    }
    printf("Entrez le 1er nombre: ");
    scanf("%f", &nb);
    max = nb;
    for (i = 1; i < n; i++) {
        printf("Entrez le %dème nombre: ", i + 1);
        scanf("%f", &nb);
        
        if (nb > max) {
            max = nb;
        }
    }

    printf("Le plus grand nombre est: %.2f\n", max);
    return 0;
}
=======
#include<stdio.h>

int main(){
int i,resultat,arr[32],nb;
printf("donner Le nembre des  elements");
scanf("%d",&nb);
printf("donner les nembres qui voulez aditionner :");
for (i = 0; i <nb; i++){
        scanf("%d",&arr[i]);

        resultat+=arr[i];
}
printf("la somme des valeur qui tu ea donner sont %d ",resultat);



    return 0;
}
>>>>>>> b03e8a4c94d79f1f20eea1431a789ec1f59d54cf
