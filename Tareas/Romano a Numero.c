
#include<stdio.h>

void main(){

	char numeroRomano[10];
	printf("Ingrese el numero en Romano a transformar: ");
	scanf("\n%s",&numeroRomano);

	int numero = 0;
	int i;
	
	int banderaM = 0;
 	int banderaD = 0;//redundante
 	int banderaC = 0;
 	int banderaX = 0;
 	int banderaL = 0;
 	int banderaV = 0;
 	int banderaI = 0;
	
	for(i = 0; i < sizeof(numeroRomano);i++){
		//			Miles
	
		if(i == 0 && banderaM == 0){//redundante
			int j;
			for(j = 0; j < 5;j++){
				if(numeroRomano[j] == 'M'){
					numero+=1000;
					if(numeroRomano[j+1] == 'C'){
						break;
					}
				}
			}
			banderaM = 1;//redundante
		}
		
		//			Cientos
		
		if(numeroRomano[i] == 'C' && numeroRomano[i+1] == 'D'){
			numero+= 400;
			banderaD = 1;	
			banderaC = 1;
			}else if(numeroRomano[i] =='C' && numeroRomano[i+1] == 'M'){
				numero+= 900;
				banderaC = 1;
			}else if(numeroRomano[i] == 'D' && banderaD == 0){
				numero+=500;
				banderaD = 1;
									
				}else if (numeroRomano[i] == 'C' && banderaC == 0 && numeroRomano[i-1] != 'X'){ //Restriccion faltante, ERROR PARA XC
					int k;
					
					for(k = 0; k < sizeof(numeroRomano);k++){
							if(numeroRomano[k] == 'C'){
							numero+=100;
						}
						banderaC = 1;	
					}
				}
		
			//		Decenas
			if(numeroRomano[i] == 'X' && numeroRomano[i+1] == 'L'){
			numero+= 40;
			banderaL = 1;	
			banderaX = 1;
			}else if(numeroRomano[i] =='X' && numeroRomano[i+1] == 'C'){
				numero+= 90;
				banderaL = 1;
				banderaX = 1;
				banderaC = 1;
				
			}else if(numeroRomano[i] == 'L' && banderaL == 0){
				numero+=50;
				banderaL = 1;
									
				}else if (numeroRomano[i] == 'X' && banderaX == 0){ //Restriccion faltante
					int l;
					for(l = 0; l < sizeof(numeroRomano);l++){
							if(numeroRomano[l] == 'X'){
							numero+=10;
						}	
					}
					banderaX = 1;
				}
			//		Unidades
			if(numeroRomano[i] == 'I' && numeroRomano[i+1] == 'V'){
			numero+= 4;
			banderaV = 1;	
			banderaI = 1;
			}else if(numeroRomano[i] =='I' && numeroRomano[i+1] == 'X'){
				numero+= 9;
				banderaV = 1;
				banderaI = 1;
				banderaX = 1;
				
			}else if(numeroRomano[i] == 'V' && banderaV == 0){
				numero+=5;
				banderaL = 1;
									
				}else if (numeroRomano[i] == 'I' && banderaI == 0){ //Restriccion faltante
					int l;
					for(l = 0; l < sizeof(numeroRomano);l++){
							if(numeroRomano[l] == 'X'){
							numero+=10;
						}	
					}
					banderaI = 1;
				}
		
	}
	
	
	printf("%d",numero);
	
	}
	
