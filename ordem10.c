#include<stdio.h>

int main()
{
    int i=0, troca=1, a=0;
    int num[10];
    for(i=0;i<10;i++)
    {
        printf("digite um numero: ");
        int n;
        scanf("%d", &n);
        num[i]=n;

    }
    while(troca==1)
    {
        troca=0;
        for(i=0;i<10;i++)
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
    printf(" a ordem sera:");
    for(i=0;i<10;i++)
    {
        printf("\n%i", num[i]);
    }
}