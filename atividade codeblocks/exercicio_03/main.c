#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int salario_user, total;
    printf("Insira seu sal�rio:");
    scanf("%d", & salario_user);
    total = salario_user/1320.00;
    printf("A quantidade de sal�rios que voc� recebe �: %d", total);
}
