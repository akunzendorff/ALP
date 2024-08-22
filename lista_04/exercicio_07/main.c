#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int soma=0, num, resultado;

    printf("Digite um número: ");
    scanf("%d", & num);

    do{
        resultado = soma*num;
        printf("%d x %d = %d. \n",soma, num, resultado);
        soma++;
    }while(soma <=10);

    return 0;
}


