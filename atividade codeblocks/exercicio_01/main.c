#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int valor, antecessor, sucessor;
    printf("Insira um numero:");
    scanf("%d", & valor);
    antecessor = valor-1;
    sucessor = valor+1;
    printf("O numero é: %d", valor);
    printf("\n O antecessor desse numero é: %d", antecessor);
    printf("\n O sucessor desse numero é: %d", sucessor);
}
