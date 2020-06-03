
#include<stdio.h>

void main(){

	char numeroRomano[10];
	printf("Ingrese el numero en Romano a transformar: ");
	scanf("\n%c",&numeroRomano);

	int numero = 0;
	int i;
	
	
	for(i = 0; i < sizeof(numeroRomano);i++){
		//			Miles
		if(i == 0){
			int j;
			int cont = 0;
			for(j = 0; j < 5;j++){	
				if(numeroRomano[j] == 'M'){
					cont++;
					
				}
			}
			numero += cont*1000;
		}
		
		//			Cientos
		
		if(numeroRomano[i] == 'C' && numeroRomano[i+1] == 'D'){
			numero+= 400;		
			}else if(numeroRomano[i] =='C' && numeroRomano[i+1] == 'M'){
				numero+= 900;
			}
		if(numeroRomano[i] == 'D'){
			numero+=500;						
				}
		if(numeroRomano[i] == 'C'){
			numero+=100;
				}
		
	}
	
	
	printf("%d",numero);
	
	
		sleep(20);
	}
	
