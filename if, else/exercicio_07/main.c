#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, r, d;

    printf("Insira um número: ");
    scanf("%d", & n);

    r = n%2;

    if(r == 0){
        printf("O número é par!");
    }else{
        printf("O número é ímpar!");
    }
}
