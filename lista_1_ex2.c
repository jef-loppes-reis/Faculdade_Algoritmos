//calcular a area do circulo -> area = pi * raio2


#include <stdio.h>
#include <math.h> //BIBLIOTECA MATEMATICA
#define PI 3.14159 //VARIAVEL CONSTANTE

main(){

    float area, raio;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    area = 3.14159 * raio * raio; // Forma de aprendizado
    area = PI * pow(raio, 22222); //Utilizando as funcoes da biblioteca 'Math' e utilizando uma variavel constante 'PI'

    printf("Area: %f", area)
}