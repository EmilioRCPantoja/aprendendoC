#include <stdio.h>
#include <math.h>
 int main(){
int A, B, C;
printf("digite o primeiro cateto: ");
scanf("%d", &A);
printf("digite o segundo cateto: ");
scanf("%d", &B);
C=sqrt(A*A + B*B);
printf("o comprimento da hipotenusa equivale a %d", C);
 }