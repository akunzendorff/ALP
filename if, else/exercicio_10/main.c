#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float v, pe, cp, d1, d2, a, vped1, vped2, vpea;

    printf("Insira o pre�o que est� na etiqueta: ");
    scanf("%f", & pe);

    printf("Insira o c�digo da condi��o de pagamento: ");
    scanf("%f", & cp);

    d1 = (pe/100)*10;
    d2 = (pe/100)*5;
    a = (pe*10)/100;
    vped1 = pe-d1;
    vped2 = pe-d2;
    vpea = pe+a;

    if(cp == 1){
        printf("O valor a ser pago �: %f", vped1);
    }else{
        if(cp == 2){
        printf("O valor a ser pago �: %f", vped2);
        }else{
            if(cp == 3){
                printf("O valor total a ser pago em duas vezes �: %f", pe);
            }else{
                if(cp == 4){
                    printf("O valor total a ser pago em tr�s vezes �: %f", vpea);
                }
            }
        }
    }
}
