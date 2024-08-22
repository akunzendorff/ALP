#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float b, m, i;

    printf("Insira a base de cálculo mensal:");
    scanf("%f", & b);

    if(b < 1.637,11){
        printf("O valor do imposto de renda a ser pago é: ISENTO");
        }else{
            if((b > 1.637,11) && (b < 2.453,50)){
                m = b*7,5;
                i = m - 122,78;
                printf("O valor do imposto de renda a ser pago é: %f", i);
            }else{
                if((b > 2.453,50) && (b < 3.271,38)){
                    m = b*15;
                    i = m - 306,80;
                    printf("O valor do imposto de renda a ser pago é: %f", i);
                }else{
                    if((b > 3.271,38) && (b < 4.087,65)){
                        m = b*22,5;
                        i = m - 552,12;
                        printf("O valor do imposto de renda a ser pago é: %f", i);
                    }else{
                        if(b > 4.087,65){
                            m = b*22,5;
                            i = m - 552,12;
                            printf("O valor do imposto de renda a ser pago é: %f", i);
                        }
                }
            }
        }
    }
}
