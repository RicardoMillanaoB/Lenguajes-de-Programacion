//Pasar segundos a  días, horas y minutos a segundos. Escribe un programa que pida al usuario los
// siguientes datos: días, horas y minutos

#include <stdio.h>
void main(){
	
	float segundos;
	float dias;
	float horas;
	float minutos;
	printf("======================= Tranformador dias,horas,minutos a segundos ==========================");

	printf("\nIngrese la cantidad de dias:",dias);
	scanf("%f",&dias);
	printf("\nIngrese la cantidad de horas: ",horas);
	scanf("%f",&horas);
	printf("\nIngrese la cantidad de minutos: ",minutos);
	scanf("%f",&minutos);
	
	segundos = (dias*86400)+(horas*3600)+(minutos*60);
	printf("======================= Tranformando a segundos ==========================");
	printf("\nLa cantidad de segundos es: %f",segundos);

	
	
	
}
