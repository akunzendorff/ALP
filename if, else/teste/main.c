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
        printf("O tri�ngulo � equil�tero!");
    }else{
        //escaleno
        if((a != b)&&(b != c)&&(c != a)){
            printf("O tri�ngulo � escaleno!");
        }else{
            printf("O tri�ngulo � isosceles");
        }
    }
}
