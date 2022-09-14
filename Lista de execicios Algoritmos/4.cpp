#include <stdio.h>

main(){
	
	int numero1, numero2, resto, quociente;
	
	printf("Digite o primeiro numero inteiro: \n");
	scanf("%d", &numero1);
	
	printf("Digite o segundo numero inteiro: \n");
	scanf("%d", &numero2);
	
	resto = numero1 % numero2;
	
	quociente = resto + (numero1 * numero2);
	
	printf("O resto e: %d", resto);
	printf("O Quociente e: %d", quociente);
}
