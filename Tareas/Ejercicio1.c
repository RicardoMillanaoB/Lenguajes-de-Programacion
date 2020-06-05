//Calculo de descuento sobre precio por teclado

#include<stdio.h>

void main(){
		
		int precioNeto;
		int descuento;
		printf("\nIngrese el precio: ");
		scanf("%d",&precioNeto);
		printf("\nIngrese el descuento (en porcentaje): ");
		scanf("%d",&descuento);	
	
		double  precioFinal = precioNeto-((precioNeto*0.01)*descuento);
	
		printf("\nPrecio Neto: %d",precioNeto);
		printf("\ncon descuento de: %d ",descuento);
	
		printf("\nPrecio Total: %f",precioFinal);
	
}
