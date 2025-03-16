#include <stdio.h>
 
int main(){
int i, n;
float s=0;
for (i=0; i<10;i++) {
printf("digite o %d numero:", i);
scanf("%d", &n);
s+=n;
}
printf(" o resultado da media equivale a %.1f", s/10);

}