#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float s, v, p, m, t;

    printf("Insira o valor do empr�stimo: ");
    scanf("%f", & v);

    printf("Insira o n�mero de parcelas: ");
    scanf("%f", & p);

    printf("Insira o sal�rio do solicitante: ");
    scanf("%f", & s);

    m = (s*30)/100;
    t = v/p;

    if(t <= m){
        printf("Empr�stimo aprovado!");
    }else{
        printf("Empr�stimo n�o aprovado!");
    }
}
