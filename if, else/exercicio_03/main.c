#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;

    printf("Insira o primeiro n�mero: ");
    scanf("%d", & n1);

    printf("Insira o segundo n�mero: ");
    scanf("%d", & n2);

    printf("Insira o terceiro n�mero: ");
    scanf("%d", & n3);

    if((n1 > n2)&&(n1 > n3)){
        printf("O maior n�mero �: %d", n1);
    }else{
        if((n2 > n1)&&(n2 > n3)){
            printf("O maior n�mero �: %d", n2);
        }else{
            printf("O maior n�mero �: %d", n3);
        }
    }
}
