#include<stdio.h>

int main(){

    int a, b, c, d, resultado;

    printf("Valor de A, B, C e D: ");
    scanf("%i", &a, &b, &c, &d);

    if (b > c && d > a && (c + d) > (a + b) && a,b,c,d > 0 && (a % 2) == 0)

        printf("Valores aceitos !");

    else printf("Valore nao aceitos !");

    return 0;
}