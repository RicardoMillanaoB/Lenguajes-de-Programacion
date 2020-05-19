//Solución de la ecuación de segundo grado. Escribir un programa que pida por teclado los tres coeficientes
//// (a, b y c) de la ecuación ax 2 +bx+c=0 y calcule las dos soluciones suponiendo que 
//ambas serán reales (es decir que la raíz queda positiva). Nota: x1,2=(a±sqrt(b2 -4ac))/2, sqrt es una 

#include <stdio.h>
#include <math.h>
void main(){
	
	float a;
	float b;
	float c;
	float resultado1;
	float resultado2;
	
	printf("======================= Ecuacion de Segundo Grado ==========================");
	printf("\nIngrese a: ",a);
	scanf("%f",&a);
	printf("\nIngrese b: ",b);
	scanf("%f",&b);
	printf("\nIngrese c: ",c);
	scanf("%f",&c);

	printf("======================= Resultado ==========================");
	
	resultado1 = (a+sqrt(b*b -4*a*c))/2;
	resultado2 = (a-sqrt(b*b -4*a*c))/2;
	printf("\nx1 : %f",resultado1);
	printf("\nx2 : %f",resultado2);

	
	
	
}
