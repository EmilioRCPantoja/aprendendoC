#include<stdio.h>

int main(){
    int a, b;
    printf("digite um numero: ");
    scanf("%d", &a);
    printf("digite um segundo numero: ");
    scanf("%d", &b);
    
    if(a<b){
        printf("%d\n%d", a, b);
    }
    else{
        printf("%d\n%d", b, a);
    }
}
