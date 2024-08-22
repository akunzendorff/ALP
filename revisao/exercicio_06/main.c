#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int v1, v2;
    float vf;
    char o;

    printf("Insira o valor 1: ");
    scanf("%d", v1);

    printf("Insira o operador: ");
    scanf("%c", o);

    printf("Insira o valor 2: ");
    scanf("%d", v2);

    vf = v1v2;

    printf("O resultado da expressão é: %f", vf);
}
