#include<stdio.h>

int main(){
    int i=0, troca=1, a=0;
    int num[3];

    for (i=0;i<3;i++)
    {
        printf("digite um numero: ");
        int n;
        scanf("%i", &n);
        num[i]=n;
    }
        while (troca==1)
        {
            troca=0;
            for(i=0; i<3; i++)
            {
                if(num[i]>num[i+1])
                {
                    troca=1;
                    a=num[i];
                    num[i]=num[i+1];
                    num[i+1]=a;
                }
            }
        }

            for ( i = 0; i < 3; i++)
            {
            printf(" a ordem e:\n [%i]\n", num[i] );
            }
}   
