#include<stdio.h>
#define homens 72.7, mulheres 62.1

main(){

    float altura, peso_ideal, resultado_homen, resultado_mulher;
    char sexo;

    prinf("Digite a altura: ");
    scanf("%f", &altura);
    
    printf("\nDigite o sexo: ");
    scanf("%s", &sexo);

    if (sexo == "M" | sexo == "mulher")
    resultado_homen = (homens * altura) - 58;

    resultado_mulher = (mulheres * altura) - 44.7;

}