#include<stdio.h>

int main(){

    float salario, prestacao, resultado;

    printf("Salario do funcionario: ");
    scanf("%f", &salario);

    printf("\nValor da prestacao: ");
    scanf("%f", &prestacao);

    resultado = (prestacao / salario) * 100;
    //printf("%.2f", resultado);

    printf("\nSalario: %.2f", salario);
    printf("\nPrestacao: %.2f", prestacao);
    printf("\nPercente porcentagem sobre prestacao: %0.f ", "%", resultado);

    if (resultado > 20)
        printf("\n\nEmprestimo nao concedido !");

    else printf("\n\nEmprestimo concedido !");

    return 0;
}