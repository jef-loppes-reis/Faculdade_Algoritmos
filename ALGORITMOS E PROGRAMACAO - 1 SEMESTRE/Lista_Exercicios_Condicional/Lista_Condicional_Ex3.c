#include<stdio.h>

int main(){

    int numero;
    float resultado;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    resultado = numero % 2;

    if (resultado == 0)

        printf("O numero e par !");

    else printf("O numero e impar !");

    return 0;
}