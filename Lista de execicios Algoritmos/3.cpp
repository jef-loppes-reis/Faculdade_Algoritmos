#include <stdio.h>

main(){
	
	int numero1, numero2, numero3;
	float resultado;
	
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero inteiro: ");
	scanf("%d", &numero2);
	
	printf("Digite o terceiro numero inteiro: ");
	scanf("%d", &numero3);
		
	resultado = (numero1 + numero2 + numero3) / 3;
	
	printf("A media e: %f", resultado);
	
}
