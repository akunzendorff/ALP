#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //Declara��o das variav�is
    int i=0, soma=0;

    //Defini��o da estrutura de repeti��o
    while(i<=500){
        //Verificar as condi��es(�mpar e mult�plo de 3)
        if((i%2 != 0)&&(i%3 == 0)){
            soma = soma + i;
        }
        i++;///Autoincremento
    }

    printf("O valor total da soma �: %d", soma);

    return 0;
}
