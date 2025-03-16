#include <stdio.h>
 int main(){
    int idade;
    printf("quantos anos voce tem?");
    scanf("%d", &idade);
    if(idade>=18){
        printf("\nvoce esta apto a fazer o nosso cartao \n:)\n");
    }
    else if(idade<0){
        printf("\nvai nascer primeiro, fazendo favor\n");
    }
    else if(idade==0){
        printf("\nacabou de nascer e ja quer se endividar?\n");
    }
    else{
        printf("\napenas maiores de 18 anos pode fazer o nosso cartao\n");
    }
 }