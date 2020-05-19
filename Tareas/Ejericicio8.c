//Cálculo de la resistencia equivalente. Escribir un programa que pida por teclado 
//dos resistencias y calcule y presente la resistencia equivalente en paralelo (Req=(R1*R2)/(R1+R2)). 
#include <stdio.h>
#include <math.h>
void main(){
	
	float resultado;
	float resistencia1;
	float resistencia2;
	
	printf("======================= Resistencia ==========================");
	printf("\nIngrese la resistencia 1: ",resistencia1);
	scanf("%f",&resistencia1);
	printf("\nIngrese la resistencia 2: ",resistencia2);
	scanf("%f",&resistencia2);

	printf("======================= Resultado ==========================");
	resultado = (resistencia1*resistencia2)/(resistencia1+resistencia2);
	printf("La resistencia es: %f",resultado);

	
	
	
}
