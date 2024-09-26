#include <stdio.h>
#include <math.h>

 int main() {
 double a, b, c, RAC, x1, x2;
 
 //  saisir les a, b , c
 printf("Entrez le coefficient a diff de zero: ");
 scanf("%lf", &a);
 
 if (a == 0) {
  printf("Le coe a ne peut pas etre zero .\n");
  return 1; 
 }
 
 printf("Entrez le coe b: ");
 scanf("%lf", &b);
 
 printf("Entrez le coe c: ");
 scanf("%lf", &c);
 
 // Calculer le RAC
 RAC = b * b - 4 * a * c;
 
 // les solutions
 if (RAC > 0) {
  // 2 solutions 
  x1 = (-b + sqrt(RAC)) / (2 * a);

 x2 = (-b - sqrt(RAC)) / (2 * a);

  printf("Les solutions reelles sont: x1 = %.2lf et x2 = %.2lf\n", x1, x2);
 } else if (RAC == 0) {
  // 1 solution

  x1 = -b / (2 * a);
  printf("La solution reelle est: x = %.2lf\n", x1);
 } else {
  // solutions complexes

  double var1 = -b / (2 * a);
  double var2 = sqrt(-RAC) / (2 * a);

  printf("Les solutions complexes sont: x1 = %.2lf + %.2lfi et x2 = %.2lf - %.2lfi\n",var1, var2, var1, var2);
 }
 
 return 0;
}
