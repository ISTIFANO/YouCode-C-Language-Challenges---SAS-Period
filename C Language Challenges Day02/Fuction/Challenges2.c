#include <stdio.h>

int leProduit(int a, int b){

int prod ;

prod=a*b;
return prod;
}
int main() {
int a,b;
int res;

printf("donner le nembre 1");
scanf("%d",&a);
printf("donner le nembre 2");
scanf("%d",&b);
res= leProduit(a,b);


printf("resultat est %d",res);
    return 0;
}