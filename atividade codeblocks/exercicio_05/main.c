#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float volume, comprimento, altura, largura;
    printf("Insira o comprimento: ");
    scanf("%f", & comprimento);
    printf("Insira a largura: ");
    scanf("%f", & largura);
    printf("Insira a altura: ");
    scanf("%f", & altura);
    volume = comprimento*largura*altura;
    printf("O volume é igual a: %f", volume);
}
