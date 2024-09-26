#include <stdio.h>
#include <math.h>  
#include <stdlib.h>

void Menu() {
     printf("\n********************Menu********************\n");
 printf("\n *         Select an operation:             *\n");
 printf("              1. Addition                                    \n");
 printf("              2. Subtraction                                    \n");
  printf("              3. Multiplication                                    \n");
 printf("              4. Division                                    \n");
 printf("              5. Average                                    \n");
 printf("              6. Absolute Value                                    \n");
 printf("              7. Exponentiation                                    \n");
printf("              8. Square Root                                    \n");
 printf("                                  9. Exit                      *\n");
 printf("Enter your choice: ");
}

double add() {
    int n;
    double S = 0, num;
    printf("Enter the number of elements to add: ");
   
 scanf("%d", &n);

    for (int i = 0; i < n; i++) {       
 printf("Enter number %d: ", i + 1);
  scanf("%lf", &num);
     S+= num;
    }
    return S;
}
double subtract() {
    double a, b;
    printf("Enter 2 numbers (a - b): ");
    scanf("%lf %lf", &a, &b);
    return a - b;
}
double multiply() {
    int n;
  double res = 1, num;
    printf("Enter the number of elements to multiply: ");
scanf("%d", &n);
    for (int i = 0; i < n; i++) {
 printf("Enter number %d: ", i + 1);
 scanf("%lf", &num);
 res *= num;
    }
    return res;
}
double divide() {
    double a, b;
printf("Enter 2 numbers (a / b): ");
  scanf("%lf %lf", &a, &b);
    if (b == 0) {
  printf("error Division par zero .\n");
  return 0;
    }
    return a / b;
}
double average() {
 int n;
 double S = 0, num;
printf("Enter the number of elements to calculate average: ");
scanf("%d", &n);
for (int i = 0; i < n; i++) {
     printf("Enter number %d: ", i + 1);
 scanf("%lf", &num);
  S += num;
    }
    return S / n;
}

double absoluteValue() {
double num;
  printf("Enter a number to find the absolute value: ");
  scanf("%lf", &num);
return fabs(num);

// MODULE FABS(valeur)
//    SI valeur < 0 ALORS
//       RETOURNE - valeur
//    SINON
//       RETOURNE valeur
//    FIN SI

}

double exponentiate() {
 double base, exp;
 printf("Enter base and exponent (base^exp): ");
scanf("%lf %lf", &base, &exp);
    return pow(base, exp);
}

double squareRoot() {
    double num;
    printf("Enter a positive number : ");
    scanf("%lf", &num);
  if (num < 0) { 
   printf("error\n");
    return 0;
    }
    return sqrt(num);
}

int main() {
    int choice;
    double result;
do {
Menu();
scanf("%d", &choice);

 switch (choice) {
     case 1:
  result = add();
  printf("Result: %.2lf\n", result);
  break;
     case 2:
  result = subtract();
  printf("Result: %.2lf\n", result);
  break;
     case 3:
  result = multiply();
  printf("Result: %.2lf\n", result);
  break;
     case 4:
  result = divide();
  if (result != 0) printf("Result: %.2lf\n", result);
  break;
     case 5:
  result = average();
  printf("Result: %.2lf\n", result);
  break;
     case 6:
  result = absoluteValue();
  printf("Result: %.2lf\n", result);
  break;
     case 7:
  result = exponentiate();
  printf("Result: %.2lf\n", result);
  break;
     case 8:
  result = squareRoot();
  if (result != 0) printf("Result: %.2lf\n", result);
break;
 case 9:
printf("Exiting the program.\n");
break;
 default:
 printf(" please try again.\n");
  }
    } while (choice != 9);

    return 0;
}