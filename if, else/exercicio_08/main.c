#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int a, b, c;

    printf("A = ");
    scanf("%d", &a);

    printf("\nB = ");
    scanf("%d", &b);

    printf("\nC = ");
    scanf("%d", &c);

    if((a == b)&&(b == c)){
        printf("O triângulo é equilátero!");
    }else{
        //escaleno
        if((a != b)&&(b != c)&&(c != a)){
            printf("O triângulo é escaleno!");
        }else{
            printf("O triângulo é isosceles");
        }
    }
}
