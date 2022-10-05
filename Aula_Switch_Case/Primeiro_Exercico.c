#include<string.h>
#include<math.h>

int main(){

    float numero1, numero2, soma, sub, div, mult, raiz, potencia;
    int expoente;
    char oper;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite a operacao: ");
    scanf("%s", &oper);

    switch (oper){

        case 'soma': numero1 + numero2; break;
        case 'sub': numero1 - numero2; break;
        case 'div': numero1 / numero2; break;
        case 'mult': numero1 * numero2; break;
        case 'raiz': sqrt(numero1); break;
        case 'portencia': printf("Digite o expoente: "); scanf("%d", &expoente); pow(numero1, expoente); break;
        
        default: print("Algo deu errado !"); break;
    }
}