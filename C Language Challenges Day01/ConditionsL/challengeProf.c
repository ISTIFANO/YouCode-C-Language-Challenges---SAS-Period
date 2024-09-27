#include <stdio.h>

int main(){

int nb1=55,nb;

int cmp=0;
do{
printf("donner moi le nembre: ");
scanf("%d",&nb);
cmp++;
if(nb<nb1){

    printf("LE NEMBRE PLUS petit  ");

}else if(nb>nb1){

  printf("LE NEMBRE PLUS grand  ");  
}else if (nb==nb1){

  printf("vous voulez trouver le nb de essais %d  ",cmp);  

}else{
     printf("le nembre invalide  ");
}
}while (nb!=nb1);
 return 0;
}