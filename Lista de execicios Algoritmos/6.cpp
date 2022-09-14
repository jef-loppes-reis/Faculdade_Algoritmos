#include <stdio.h>

main(){
	
	float notaA, notaB, media;
	
	printf("Digite a nota A de 0 a 10: ");
	scanf("%f", &notaA);
	
	printf("Digite a nota B de 0 a 10: ");
	scanf("%f", &notaB);
	
	media = (notaA + notaB) / 11;
	
	printf("A media e: %f", media);
}
