#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int c;

    printf("Insira o c�digo do produto: ");
    scanf("%d", & c);

    switch(c){
        case 1:
            printf("O produto � um alimento � n�o-perec�vel!");
        break;
        case 2:
            printf("O produto � um alimento � perec�vel!");
        break;
        case 3:
            printf("O produto � um alimento � perec�vel!");
        break;
        case 4:
            printf("O produto � um alimento � perec�vel!");
        break;
        case 5:
            printf("O produto � vestu�rio!");
        break;
        case 6:
            printf("O produto � vestu�rio!");
        break;
        case 7:
            printf("O produto � higiene pessoal!");
        break;
        case 8:
            printf("O produto � um utens�lio dom�stico!");
        break;
        case 9:
            printf("O produto � um utens�lio dom�stico!");
        break;
        case 10:
            printf("O produto � um utens�lio dom�stico!");
        break;
        default:
            printf("C�digo Inv�lido!");
    }
    return 0;
}
