#include <stdio.h>

main(){
	
	float area;
	int raio;
	
	printf("Digite o raio: ");
	scanf("%d", &raio);
	
	area = 3.14 * (raio * raio);
	
	printf("A area e: %f", area);
	
}
