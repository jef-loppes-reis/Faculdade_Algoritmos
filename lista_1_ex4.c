//construa um algoritmo que a partir de leitura de dois numeros inteiros
//forneca o resto e o quociente da divisao do primeiro
//pelo segundo

#include <stdio.h>

int main(int argc, char const *argv[])
{
    (
        int numero1, numero2, resto, quociente;
        print("Digite o valor do primeiro numero: ");
        scanf("%d", &numero1);

        printf("Digite o valor do segundo numero: ");
        scanf("%d", &numero2);

        quociente = numero1 / numero2;

        resto = numero1 % numero2;

        printf("Quociente: %d\nResto: ", quociente, resto)
    )
    return 0;
}
