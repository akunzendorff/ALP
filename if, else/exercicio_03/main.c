#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;

    printf("Insira o primeiro número: ");
    scanf("%d", & n1);

    printf("Insira o segundo número: ");
    scanf("%d", & n2);

    printf("Insira o terceiro número: ");
    scanf("%d", & n3);

    if((n1 > n2)&&(n1 > n3)){
        printf("O maior número é: %d", n1);
    }else{
        if((n2 > n1)&&(n2 > n3)){
            printf("O maior número é: %d", n2);
        }else{
            printf("O maior número é: %d", n3);
        }
    }
}
