#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int pontos=0, golsA1, golsB1;
    int golsA=3;
    int golsB=2;

    printf("Qual a sua aposta para a quantidade de gols do time 1? ");
    scanf("%d", & golsA1);

    printf("Qual a sua aposta para a quantidade de gols do time 2? ");
    scanf("%d", & golsB1);

    if((golsA>golsB)&&(golsA1>golsB1)){
        pontos = pontos+10;
    }
    if((golsA<golsB)&&(golsA1<golsB1)){
        pontos = pontos+10;
    }
    if((golsA==golsB)&&(golsA1==golsB1)){
        pontos = pontos+10;
    }
    if(golsA == golsA1){
        pontos = pontos+5;
    }
    if(golsB == golsB1){
        pontos = pontos+5;
    }
    printf("A quantidade de pontos que você fez foi: %d", pontos);
}
