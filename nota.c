#include<stdio.h>
int main(){
    int nota;
    printf("qual foi a sua nota?");
    scanf("%d", &nota);
    
    switch (nota)
    {
        case 10:
            printf("parabens voce foi excelente");
            break;
        case 9:
            printf("voce foi bem");
            break;
        case 8:
            printf("voce pode melhorar");
            break;
        case 7:
            printf("na média");
            break;
        case 6:
            printf("dessa vez foi quase");
            break;
        case 5:
            printf("da pra melhorar");
            break;
        case 4:
            printf("vamo estudar vamo");
            break;
        case 3:
            printf("tava dificil ne?");
            break;
        case 2:
            printf("eu sou tao ruim assim como professor?");
            break;
        case 1:
            printf("nao quis estudar deu nisso");
            break;
        case 0:
            printf("bora querer bora");
            break;
default:
printf("digite uma nota valida");

    }

}