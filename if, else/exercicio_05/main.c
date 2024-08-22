#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float s, v, p, m, t;

    printf("Insira o valor do empréstimo: ");
    scanf("%f", & v);

    printf("Insira o número de parcelas: ");
    scanf("%f", & p);

    printf("Insira o salário do solicitante: ");
    scanf("%f", & s);

    m = (s*30)/100;
    t = v/p;

    if(t <= m){
        printf("Empréstimo aprovado!");
    }else{
        printf("Empréstimo não aprovado!");
    }
}
