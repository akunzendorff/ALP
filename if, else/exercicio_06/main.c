#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int c;

    printf("Insira o código do produto: ");
    scanf("%d", & c);

    switch(c){
        case 1:
            printf("O produto é um alimento é não-perecível!");
        break;
        case 2:
            printf("O produto é um alimento é perecível!");
        break;
        case 3:
            printf("O produto é um alimento é perecível!");
        break;
        case 4:
            printf("O produto é um alimento é perecível!");
        break;
        case 5:
            printf("O produto é vestuário!");
        break;
        case 6:
            printf("O produto é vestuário!");
        break;
        case 7:
            printf("O produto é higiene pessoal!");
        break;
        case 8:
            printf("O produto é um utensílio doméstico!");
        break;
        case 9:
            printf("O produto é um utensílio doméstico!");
        break;
        case 10:
            printf("O produto é um utensílio doméstico!");
        break;
        default:
            printf("Código Inválido!");
    }
    return 0;
}
