#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int he, me, hs, ms, t, m, v;

    printf("Insira a hora de entrada: ");
    scanf("%d", & he);

    printf("Insira o minuto de entrada: ");
    scanf("%d", & me);

    printf("Insira a hora de saída: ");
    scanf("%d", & hs);

    printf("Insira o minuto de saída: ");
    scanf("%d", & ms);

    t = hs - he;
    m = ms - me;

    if((t == 1)&&(m == 0)){
        printf("O valor a ser pago é R$4");
    }else{
        if((t == 1)&&(m != 0)){
            printf("O valor a ser pago é R$6");
        }else{
            if((t == 2)&&(m == 0)){
                printf("O valor a ser pago é R$6");
            }else{
                if((t == 2)&&(m != 0)){
                    printf("O valor a ser pago é R$7");
                }else{
                    v = (t - 2) + 6;
                    printf("O valor a ser pago é R$ %d", v);
                }
            }
        }
    }

return 0;
}

