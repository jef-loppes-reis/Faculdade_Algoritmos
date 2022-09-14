#include <stdio.h>

main(){
	
	int quantidadeTotalRolos;
	float quantidadeMetros, quantidadeTotalFios;
	
	printf("Digite a quantidade de fios em metros a ser utilizados: ");
	scanf("%d", quantidadeMetros);
	
	quantidadeTotalRolos = quantidadeMetros / 50;
	printf("%f", quantidadeTotalRolos);
	
}
