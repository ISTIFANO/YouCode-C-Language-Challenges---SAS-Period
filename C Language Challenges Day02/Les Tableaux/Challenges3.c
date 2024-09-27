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