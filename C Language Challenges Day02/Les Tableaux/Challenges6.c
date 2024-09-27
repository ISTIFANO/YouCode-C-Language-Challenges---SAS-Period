#include <stdio.h>

int main(){
int nb,i,resultat=04;

printf("donner moi les valeur du tableau :");
scanf("%d",&nb);
int arr[nb];
for (i = 0; i <nb ; i++)
{
   scanf("%d",&arr[i]);
}
for (i = 0; i <nb ; i++)
{
    resultat+=arr[i];
   printf("la somme du nembres est %d",resultat);
}
    return 0;
}
