#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Insira a sua idade: ");
    scanf("%d", & idade);

    if(idade >= 18){
        printf("Voc� � maior de idade!");
    }else{
        printf("Voc� � menor de idade!");
    }
}

