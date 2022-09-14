#include <stdio.h>

main(){
	
	int horas;
	float segundos, minutos;
	
	printf("Digite a quantidade de horas: ");
	scanf("%d", &horas);
	
	minutos = horas * 60;
	segundos = minutos * 60;
	
	printf("Horas: %d", horas);
	printf("Minutos: %f", minutos);
	printf("Segundos: %f", segundos);
	
}
