//Calculo d area,perimetro circunferencia y volumen de una esfera

#include<stdio.h>

void main(){
	float radioCircunferencia;
	float radioEsfera;
	float pi = 2.1416;
	printf("\nIngrese el radio de la circunferencia: ");
	scanf("%f",&radioCircunferencia);
	printf("\nIngrese el radio de la esfera: ");
	scanf("%f",&radioEsfera);
	float perimetro = 2*pi*radioEsfera;
	float area = 2*pi*radioCircunferencia*radioCircunferencia;
	float volumen = (radioEsfera*radioEsfera*radioEsfera*4*pi)/3;
	printf("\nSu área:%f",area);
	printf("\nSu perimetro:%f ",perimetro);
	printf("\nSu volumen es:%f ",volumen);
}
