#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float ki, kf, cc, dp, gc;
    printf("Insira o quilometro inicial: ");
    scanf("%f", & ki);
    printf("Insira o quilometro final: ");
    scanf("%f", & kf);
    printf("Insira o consumo de combust�vel: ");
    scanf("%f", & cc);
    dp = kf-ki;
    gc = dp/cc;
    printf("O consumo de combust�vel do autom�vel em km/l �: %f", gc);
}
