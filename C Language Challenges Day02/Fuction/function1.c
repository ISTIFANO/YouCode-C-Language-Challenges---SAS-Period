#include <stdio.h>

int somme(int a,int b);

int main(){
int a,b;
int var;

printf("donner moi le premier nembre (a) : ");
scanf("%d",&a);
printf("donner moi le premier nembre (b) : ");
scanf("%d",&b);
var=somme(a,b);


printf(" la resultat de ladition est %d",var);

return 0;
}
int somme(int a,int b){

int resultat ;

resultat=a+b;

return resultat;


}