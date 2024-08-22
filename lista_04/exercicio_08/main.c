#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, multi, resul, nmulti;

    printf("Digite um número: ");
    scanf("%d", & num);

    printf("%d! = ", num);
    multi = num;

    do{
        multi = multi-1;
        nmulti = multi;
        resul = num*nmulti;
        printf("%d x ", multi);
    }while(multi != 1);

    printf(" = %d.", resul);

    return 0;
}
