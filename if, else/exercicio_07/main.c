#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, r, d;

    printf("Insira um n�mero: ");
    scanf("%d", & n);

    r = n%2;

    if(r == 0){
        printf("O n�mero � par!");
    }else{
        printf("O n�mero � �mpar!");
    }
}
