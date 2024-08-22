#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float volume, altura, raio, raioelevado;
    printf("Insira a altura: ");
    scanf("%f", & altura);
    printf("Insira o raio: ");
    scanf("%f", & raio);
    raioelevado = pow(raio, 2);
    volume = 3.14*raioelevado*altura;
    printf("O volume é %f", volume);
}
