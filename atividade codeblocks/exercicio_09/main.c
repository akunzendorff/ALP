#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float anos, meses, dias, total;
    printf("Insira a quantidade de anos: ");
    scanf("%f", & anos);
    printf("Insira a quantidade de meses: ");
    scanf("%f", & meses);
    printf("Insira a quantidade de dias: ");
    scanf("%f", & dias);
    total = (anos*365)+(meses*30)+dias;
    printf("A sua idade em dias é: %f", total);
}
