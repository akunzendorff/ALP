#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int tl, ql;
    float t, q, h;

    printf("Insira a quantidade de lados: ");
    scanf("%d", & ql);

    printf("Insira o tamanho dos lados: ");
    scanf("%d", & tl);

    switch(ql){

    case 3:
        t = ((tl*tl)*1.73)/4;
        printf("A área do seu polígono é: %f", t);
    break;

    case 4:
        q = tl*tl;
        printf("A área do seu polígono é: %f", q);
    break;

    case 6:
        h = (((6*tl)*tl)*1.73)/4;
        printf("A área do seu polígono é: %f", h);
    break;

    default:
            printf("Não sei calcular a área.");
    }
    return 0;
}
