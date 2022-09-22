#include <stdio.h>

int main(){

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade > 16) {
        
        printf("%d\n", idade);
        printf("Pode votar !\n");
    }
    else { 
    
        printf("%d\n", idade);
        printf("Nao pode votar!\n");
    }
}
