#include <stdio.h>

int main(){
    const double PI = 3.14159;
    double raio, circunferencia, area;
printf("Digite o raio da sua circunferencia: ");
scanf("%lf", &raio);
circunferencia=2*PI*raio;
area=PI*raio*raio;
printf("com o raio sendo %.2lf o comprimento da circunferencia equivale a %.2lf \ne a sua area equivale a %.2lf", raio, circunferencia, area);
}