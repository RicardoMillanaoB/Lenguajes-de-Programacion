
#include<stdio.h>

void main(){

	int numero;
	printf("Ingrese el numero a transformar a numero romano: ");
	scanf("\n%d",&numero);

	int restoMil,restoCentena,restoDecima,restoUnidades;
	//Tranformar a char
	
	
	if(numero>=1000 && numero<4000){
		int auxNumero = (numero/1000)*1000;//redundantes
		switch (auxNumero%1000){
			case 0:
				restoMil = auxNumero/1000;
				int restoMilAux = restoMil;
				int i;
			
				for(i = 0; i < restoMil;i++){
					printf("M");
				}
				
				numero -= 1000*restoMil;
			}
	}
	 if(numero<1000){
	//Centena
		int auxNumero = (numero/100)*100;//redundante
		int restoCentenaAux;//esto para la convalidacion para seguir codigo
		switch (auxNumero%100){
			case 0:
				restoCentena = auxNumero/100;
				restoCentenaAux = restoCentena;
				/*if(restoCentena>=5){
					printf("D");
					restoCentena -= 5;
				}
				if(restoCentena>=1){
					int i;
					for(i = 0; i < restoCentena;i++){
						printf("C");
					}
				}
				*/
			if(restoCentena == 4){
					printf("CD");
					numero -= 100*restoCentenaAux;
					break;
					
				}else if(restoCentena == 9){
					printf("CM");
					numero -= 100*restoCentenaAux;
					break;	
				}
				if(restoCentena>=5){
					printf("D");
					restoCentena -= 5;						
				}
				if(restoCentena>=1){
					int i;
					for(i = 0; i < restoCentena;i++){
						printf("C");
					}
				}
				numero-=100*restoCentenaAux;
				break;
				}
			}
	if(numero<100){
	//Decena
		int auxNumero = (numero/10)*10;//redundantes
		switch (auxNumero%10){
			case 0:
				restoDecima = auxNumero/10;
				int restoDecimaAux = restoDecima;
				if(restoDecima == 4){
					printf("XL");
					break;
					numero -= 10*restoDecimaAux;
				}else if(restoDecima == 9){
					printf("XC");
					numero -= 10*restoDecimaAux;
					break;
				
				}
				if(restoDecima>=5){
					printf("L");
					restoDecima -= 5;						
				}
				if(restoDecima>=1){
					int i;
					for(i = 0; i < restoDecima;i++){
						printf("X");
					}
				}
				numero -= 10*restoDecimaAux;
				break;
				}
			}
	if(numero<10){
	//Unidades
		int auxNumero = (numero/1)*1;//redundantes
		switch (auxNumero%1){
			case 0:
				restoUnidades = auxNumero/1;
				if(restoUnidades == 4){
					printf("IV");
					break;
				}
				if(restoUnidades==9){
					printf("IX");
					break;
				}	
				if(restoUnidades>=5){
					printf("V");
					restoUnidades -= 5;
						
				}
				if(restoUnidades>=1){
					int i;
					for(i = 0; i < restoUnidades;i++){
						printf("I");
					}
				}
				break;
				}
			}
			
		sleep(20);
	}
	

