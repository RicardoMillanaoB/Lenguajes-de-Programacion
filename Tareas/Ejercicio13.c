#include<stdio.h>

void main(){

int codigoProductos [6] = {123456,214,215,216,217,218};
int codigoPrecios [6] = {15000,1500,400,6000,2000,1500};

int codigo;
int precio;
int cantidad;
printf("\nIngrese el codigo del producto: ");
scanf("%d",&codigo);
printf("\nIngrese la cantidad del producto: ");
scanf("%d",&cantidad);

int i;
for(i = 0; i < 6 ; i++){
	if(codigo == codigoProductos[i]){
		precio = codigoPrecios[i];	
		}	
	}

printf("=============== Los Peques ===============");
float productoNeto = cantidad*precio;
float descuentoProducto;
float ivaProducto;
float productoConDescuento;

printf("\nCodigo del producto: %d",codigo);
printf("\nCantidad a llevar: %d",cantidad);

descuentoProducto = productoNeto*0.1;

printf("\nDescuento del 10%: %f",descuentoProducto);
ivaProducto = (productoNeto-descuentoProducto)*0.19;
printf("\nIVA producto: %f",ivaProducto);
float totalProducto = (productoNeto-descuentoProducto)+ivaProducto;
printf("\nPrecio TOTAL: %f",totalProducto);

}
