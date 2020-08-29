#include <stdio.h>
#include<windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
//1-Crear una funcion llamada arregloAleatorio() que devuelva un arreglo de enteros

int * arregloAleatorio(){ 
	srand((unsigned)time(NULL));
	int i,j;
	static int matriz[10];
	for(i = 0; i < sizeof(matriz); i++){
		//colocar 10 valores enteros aleatorios entre 5 y 25 en el arreglo
			int numeroRandom = rand()%(5-25-1)+5;
			matriz[i] = numeroRandom;
			}
		
	return matriz;
	/*
	En C no se puede retornar un array en una funcion pero si se puede referenciar mediante punteros, por eso esta 
	funcion retorna un puntero, que hace referencia a una array con valores aleatorios.
	*/
}

void imprimirArreglo(int *a){
	int i = 0;
	printf("\nImprimiendo la lista..");
	for(i = 0; i < 10;i++){
		printf("\n(%d) %d",(i+1),*a++);
	}
}
void imprimirPares(int *a){
	int i;
	int *aux;
	printf("\nImprimir solo los numeros pares:");
	for(i = 0; i < 10;i++){
		*aux = *a++;
		if(*aux%2 == 0){
			printf("\n(%d) %d",(i+1),*aux);
		}
	}
}
void imprimirImpares(int *a){
	int i;
	int *aux;
	printf("\nImprimir solo los numeros impares:");
	for(i = 0; i < 10;i++){
		*aux = *a++;
		if(*aux%2 != 0){
			printf("\n(%d) %d",(i+1),*aux);
		}
	}
}
void imprimirMaxMin(int *a){
	int i;
	int *aux;
	int auxMaximo = 0;//como los valores no pueden ser menores a 5 tendrá el valor inicial 0
	int auxMinimo = 30;//del mismo modo que el anterior
	for(i = 0; i < 10;i++){
		*aux = *a++;
		if(*aux > auxMaximo){
			auxMaximo = *aux;
		}
		if(*aux < auxMinimo){
			auxMinimo = *aux;
		}
	}
	printf("\nValor maximo: %d\nValor minimo: %d",auxMaximo,auxMinimo);
}
void imprimirSuma(int *a){
	int i;
	int suma = 0;
	for(i = 0; i < 10;i++){
		suma+=*a++;
	}
	printf("\nLa suma total de los valores del arreglo es: %d",suma);
}
int main(){	
	int *matriz = arregloAleatorio();
	//3-Imprime todos los valores del arreglo
	imprimirArreglo(matriz);
	//4-Imprime solo los pares
	imprimirPares(matriz);
	//5-Imprime solo los impares
	imprimirImpares(matriz);
	//6-Imprime los alores minimo y maximo del arreglo
	imprimirMaxMin(matriz);
	//7-Imprime la suma de todos los valores del arreglo
	imprimirSuma(matriz);

	return 1;
}

