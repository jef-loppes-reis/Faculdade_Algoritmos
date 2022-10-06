#include<stdio.h>
#include<math.h>

int main(){

    int numero1, numero2;
    char oper;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    
    printf("Digite a opereçao: ");
    scanf("%s", &oper);

    switch (oper){

        case '+': printf("%d", numero1 + numero2); break;
        case '-': printf("%d", numero1 - numero2); break;
        case '/': printf("%d", numero1 / numero2); break;
        case '*': printf("%d", numero1 * numero2); break;
        case 'r': printf("%f", sqrt(numero1)); break;
        case 'p': printf("%f", pow(numero1, numero2)); break;
        
        default: printf("Algo deu errado !"); break;
    }
    
    return 0;
}
