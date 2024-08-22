#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float altura, maior=0, menor=3, i=0;

    while(i <= 15){
        printf("Insira a altura: ");
        scanf("%f", & altura);

        if(altura>maior){
            maior=altura;
        }
        if(altura<menor){
            menor=altura;
        }
        i++;
    }
    printf("A maior altura é: %f", maior);
    printf("\nA menor altura é: %f", menor);
    return 0;
}
