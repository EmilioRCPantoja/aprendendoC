#include<stdio.h>

int main(){
    int i=0, troca=0;
    int num[10];

    for (i=0;i<10;i++){
        printf("digite um numero: ");
        int n;
        scanf("%i", &n);
        num[i]=n;
    }
    if(num[i]>num[i+1]){
        do
    {
            troca=num[i];
            num[i]=num[i+1];
            num[i+1]=troca;
            troca=0;
    }   while (troca==1);

            for ( i = 0; i < 10; i++)
            {
            printf(" a ordem e:\n [%i]\n", num[i] );
            }
}   else
    {
    for ( i = 0; i < 10; i++)
    {
        printf(" a ordem e:\n [%i]\n", num[i] );
    }
}
}