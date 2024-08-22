#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float v, pe, cp, d1, d2, a, vped1, vped2, vpea;

    printf("Insira o preço que está na etiqueta: ");
    scanf("%f", & pe);

    printf("Insira o código da condição de pagamento: ");
    scanf("%f", & cp);

    d1 = (pe/100)*10;
    d2 = (pe/100)*5;
    a = (pe*10)/100;
    vped1 = pe-d1;
    vped2 = pe-d2;
    vpea = pe+a;

    if(cp == 1){
        printf("O valor a ser pago é: %f", vped1);
    }else{
        if(cp == 2){
        printf("O valor a ser pago é: %f", vped2);
        }else{
            if(cp == 3){
                printf("O valor total a ser pago em duas vezes é: %f", pe);
            }else{
                if(cp == 4){
                    printf("O valor total a ser pago em três vezes é: %f", vpea);
                }
            }
        }
    }
}
