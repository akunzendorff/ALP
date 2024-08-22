#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float a, b, media;

    printf("Insira a nota 1: ");
    scanf("%f", &a);

    printf("\nInsira a nota 2: ");
    scanf("%f", &b);

    media = (a + b)/2;

    if(media == 7){
        printf("Você foi aprovado! A sua média é: %f", media);
    }else{
        if(media > 7){
                printf("Você foi aprovado! A sua média é: %f", media);
        }else{
            printf("Você foi reprovado :( A sua média é: %f", media);
        }
    }
}
