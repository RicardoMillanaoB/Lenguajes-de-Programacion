//Media de 4 numeros por teclado
#include <stdio.h>
#include <math.h>
void main(){
	int a,b,c,d;
	
	printf("\nIngrese a: ");
	scanf("%d",&a);
	printf("\nIngrese b: ");
	scanf("%d",&b);
	printf("\nIngrese c: ");
	scanf("%d",&c);
	printf("\nIngrese d: ");
	scanf("%d",&d);
	
	double promedio = (a+b+c+d)/4;
	printf("\nEl promdio es: %f",promedio);
}
