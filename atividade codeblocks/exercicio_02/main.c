#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int velocidade;
    float conversao;
    printf("Insira a velocidade:");
    scanf("%d", & velocidade);
    conversao = velocidade*0.62;
    printf("O velocidade em m/h é: %f", conversao);

}
