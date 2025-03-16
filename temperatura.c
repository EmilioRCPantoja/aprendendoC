#include <stdio.h>

int main(){
    float c, f, k;
    printf("digite a sua temperatura em grau celsius: ");
    scanf("%f", &c);
    f=(c*9/5)+32;
    k=c+273;
    printf("\na temperatura de %.2f graus Celsius se equivale \na %.2f graus Farenheit e %.2f graus Kelvin", c, f, k); 

}