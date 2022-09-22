#include<stdio.h>

int main(){

    float altura, resultado;
    char sexo;

    printf("Digite o Sexo (F ou M): ");
    scanf("%s", &sexo);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (sexo == 'H'){

        resultado = (72.7 * altura) - 58;
        printf("O resultado e: (%f)", resultado);
    }
    else{

        resultado = (62.1 * altura) - 44.7;
        printf("O resultado e: (%f)", resultado);
    }
}
