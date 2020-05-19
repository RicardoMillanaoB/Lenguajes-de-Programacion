//Pasar segundos a  días, horas y minutos a segundos. Escribe un programa que pida al usuario los
// siguientes datos: días, horas y minutos

#include <stdio.h>
void main(){
	
	float segundos;
	float dias;
	float horas;
	float minutos;
	printf("======================= Tranformador de segundos ==========================");
	printf("\nIngrese los segundos a transformar: ");
	scanf("%f",&segundos);
	
	dias = segundos/86400;
	horas = segundos/3600;
	minutos = segundos/60;
	
	printf("======================= Tranformando a horas,minutos y segundos ==========================");
	printf("\nLa cantidad de dias es: %f",dias);
	printf("\nLa cantidad de horas es: %f",horas);
	printf("\nLa cantidad de minutos es: %f",minutos);
	
	
	
}
