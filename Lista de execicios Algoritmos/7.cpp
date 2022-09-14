#include <stdio.h>

main(){
	
	char funcionario[20], sexo[1], matricula[4];
	int horasTrabalhadas;
	float valorHora, salario;
	
	printf("Digite o nome do funcionario: ");
	scanf("%s", funcionario);
	
	printf("\nDigite o sexo do funcionario. Ex:'M' ou 'F': ");
	scanf("%s", sexo);
	
	printf("\nNumero da matricula, 4 digitos: ");
	scanf("%s", matricula);
	
	printf("\nQuantas horas trabalhadas? : ");
	scanf("%d", horasTrabalhadas);
	
	printf("\nValor por hora: ");
	scanf("%f", valorHora);
	
	salario = horasTrabalhadas * valorHora;
	
	printf("Salario total: %f", salario);
	
}
