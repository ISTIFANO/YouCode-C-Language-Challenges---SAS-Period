#include <stdio.h>

int main() {
int base, Ex;
 int res = 1;
printf("Entrez la base : ");
scanf("%d", &base);
 printf("Entrez l Expo : ");
scanf("%d", &Ex);

for (int i = 0; i < Ex; i++) {
res *= base;
}
printf("%d^%d = %lld\n", base, Ex, res);
  return 0;
}
