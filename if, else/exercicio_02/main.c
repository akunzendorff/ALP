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
        printf("Você é maior de idade!");
    }else{
        printf("Você é menor de idade!");
    }
}

