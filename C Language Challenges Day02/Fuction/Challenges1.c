#include <stdio.h>

int somme(int a, int b){

int s ;

s=a+b;
return s;
}
int main() {
int a,b;
int res;

printf("donner le nembre 1");
scanf("%d",&a);
printf("donner le nembre 1");
scanf("%d",&b);
res= somme(a,b);


printf("resultat est %d",res);
    return 0;
}