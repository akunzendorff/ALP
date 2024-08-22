#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int frt, celsius;
    printf("Insira a temperatura em Fahreinheit: ");
    scanf("%d", & frt);
    celsius = (frt-32)/1.8;
    printf("A conversâo dessa temperatura em celsius é: %d", celsius);
}
