#include <stdio.h>

int main(){
int nb1,i;
int arr[78];
printf("donner le nembre des element du tableaux ");
scanf("%d",&nb1);

for (i = 0; i <nb1; i++)
{
    scanf("%d",&arr[i]);
   
}
for (i = 0; i <nb1; i++)
{
    printf("%d",arr[i]);
   
}


return 0;
}
