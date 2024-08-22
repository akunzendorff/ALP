#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int valor, hor, min, seg, restoh;
    printf("Insira a quantidade de segundos: ");
    scanf("%d", & valor);
    hor = valor/3600;
    restoh = valor%3600;
    min = restoh/60;
    seg = restoh%60;
    printf("Horas: %d", hor);
    printf("\nMinutos: %d", min);
    printf("\nSegundos: %d", seg);
}
