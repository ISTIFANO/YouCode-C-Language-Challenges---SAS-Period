#include <stdio.h>

    int main() {
    int nb1;
    int i,res;

    printf("donner moi le nembre de base :");
    scanf("%d",&nb1);

    for (i= 1; i < nb1; i++)
    {
     res+=nb1*i;
    }
    printf("reseltat est %d",res);
}

