#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Declaração das variavéis
    int i=0, soma=0;

    //Definição da estrutura de repetição
    while(i<=500){
        //Verificar as condições(ímpar e multíplo de 3)
        if((i%2 != 0)&&(i%3 == 0)){
            soma = soma + i;
        }
        i++;///Autoincremento
    }

    printf("O valor total da soma é: %d", soma);

    return 0;
}
