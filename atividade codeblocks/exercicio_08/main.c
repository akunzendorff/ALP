#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int qtd_um, qtd_dois;
    float val_um, val_dois, porcent, total;
    printf("Insira o valor da peça 1: ");
    scanf("%f", & val_um);
    printf("Insira o valor da peça 2: ");
    scanf("%f", & val_dois);
    printf("Insira a quantidade da peça 1: ");
    scanf("%d", & qtd_um);
    printf("Insira a quantidade da peça 2: ");
    scanf("%d", & qtd_dois);
    printf("Insira a porcentagem a ser acrescida: ");
    scanf("%f", & porcent);
    total = ((val_um*qtd_um)+(val_dois*qtd_dois))*((porcent/100)+1);
    printf("O valor total a ser pago é: %f", total);
}
