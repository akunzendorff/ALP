#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int s, bonus, t;

    printf("Insira o seu salário: ");
    scanf("%d", & s);

    printf("Insira o seu tempo de serviço: ");
    scanf("%d", & t);

    if(t >= 5){
        bonus = 0.2*s;
        printf("O valor do seu bônus é: %d", bonus);
    }else{
        bonus = 0.1*s;
        printf("O valor do seu bônus é: %d", bonus);
    }
}
