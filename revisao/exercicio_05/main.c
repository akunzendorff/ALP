#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int p;
    float i, pi, pi2;

    printf("Insira o valor do produto: ");
    scanf("%d", & p);

    if(p <= 100){
        i = p*0.10;
        pi = p+i;
        printf("O preço inflacionado é: %f", pi);
    }else{
            i = p*0.20;
            pi2 = p+i;
            printf("O preço inflacionado é: %f", pi2);
    }
}
