#include<stdio.h>

main(){

    int quantidadeTotalRolos;
	float quantidadeMetros, quantidadeTotalFios, quantidadeAvulsas;
	
	printf("Digite a quantidade de fios em metros a ser utilizados: ");
	scanf("%d", quantidadeMetros);
	
	quantidadeTotalRolos = quantidadeMetros / 50;
	printf("%f", quantidadeTotalRolos);

    quantidadeAvulsas = quantidadeMetros % 50
    printf("%f", quantidadeAvulsas);
    
}