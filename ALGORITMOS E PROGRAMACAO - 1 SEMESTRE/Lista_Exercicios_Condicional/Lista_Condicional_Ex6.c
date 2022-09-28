#include <stdio.h>
#define homem 72.7
#define mulher 62.1

main(){

    float altura, resultado;
    char sexo[10];

    printf("\nDigite a altura: ");
    scanf("%f", &altura);

    printf("Digite o Sexo: ");
    scanf("%s", &sexo);

    if (sexo == "F" || sexo == "mulher" || sexo == "f"){
        
        resultado = (mulher * altura) - 44.7;
        printf("\nPessoa do Sexo: %s", sexo);
        printf("\nAltura: %f", altura);
        printf("\nPeso ideal: %f", resultado);
    }

    else{
        resultado = (homem * altura) - 58;
        printf("\nPessoa do Sexo: %s", sexo);
        printf("\nAltura: %f", altura);
        printf("\nPeso ideal: %f", resultado);
    }
    return 0;
}
