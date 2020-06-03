#include <stdio.h>
#include<windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void gotoxy(int x,int y){
HANDLE hCon;
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;
hCon=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hCon,dwPos);
}
void imprimirMatriz(int matrix [5][5]){
	int i,j;
//	printf("\n\n\n\n\n");
	for(i=0; i< 5; i++){
		//printf("\n\t\t\t\t\t");
		if(i == 0){	
			//Redundante(?)	
		}else{
		printf("\n");
		}	
		for(j= 0; j< 5;j++){
			if(matrix[i][j] == 1){
			printf("1");	
			}else{
				printf("0");
			}
		}
	
	}
}

void main(){
	srand(time(NULL));
	int i,j;
	int matriz[5][5];
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(i== 0 && j == 0){
				matriz[i][j] = 0;//siempre en la posicion 0,0 será 0
			}else{
			int numeroRandom = rand()%2;
			matriz[i][j] = numeroRandom;
			}
		}
	}
	imprimirMatriz(matriz);
	
	gotoxy(0,0); //j+1, posicion 0,0
	printf("8");
	
	printf("\n\n\n\n\n\n\n");
	
	//		VIDAS	//
	int vidas = 3;

	int posicionX = 0;
	int posicionY = 0;//j+1
	
	do{
		gotoxy(40,0);
		printf("Vidas:%d || Tecla pulsada: ",vidas);
		char tecleo;
		tecleo = getche();
		//Esto representa la posicion 0,0
		
		switch(tecleo){
			
			case 'f'://derecha 
			if(matriz[posicionY][posicionX+1] == 1){
				vidas-= 1;
				gotoxy(0,15);
				printf("Pucha que mal, hay una pared");
				
				break;
				}else{
					gotoxy(posicionX,posicionY); 
					printf("0");
					++posicionX;
					gotoxy(posicionX,posicionY); 
					printf("8");
				
					break;
				}
	
			case 'e'://arriba
			if(matriz[posicionY-1][posicionX] == 1){
				vidas-= 1;
				gotoxy(0,15);
				printf("Pucha que mal, hay una pared");
				
				break;
				}else{
					gotoxy(posicionX,posicionY); 
					printf("0");
					--posicionY;
					gotoxy(posicionX,posicionY); 
					printf("8");
					break;
				}
			case 's'://izquierda
			if(matriz[posicionY][posicionX-1] == 1){
				vidas-= 1;
				gotoxy(0,15);
				printf("Pucha que mal, hay una pared");
				
				break;
				}else{
					gotoxy(posicionX,posicionY); 
					printf("0");
					--posicionX;
					gotoxy(posicionX,posicionY); 
					printf("8");
					break;
				}
			case 'd'://abajo
			if(matriz[posicionY+1][posicionX] == 1){
				vidas-= 1;
				gotoxy(0,15);
				printf("Pucha que mal, hay una pared");
				break;
				}else{
					gotoxy(posicionX,posicionY); 
					printf("0");
					++posicionY;
					gotoxy(posicionX,posicionY); 
					printf("8");
						if(posicionY+1 == 5){
								vidas = 8;
								gotoxy(0,17);
								printf("===========================================\n");
								printf(" =========\tGANASTE\t\t=========\n");
								printf("===========================================\n");
								
								break;
						}
					break;
				}
			default:
				gotoxy(0,15);
				printf("\t\t\t    e");
				printf("\nIngrese una tecla valida:s\tf");
				printf("\n\t\t\t    d");
				break;
			}
			
		}while(vidas < 4);
	
		if(vidas != 8){	
		
			gotoxy(0,18);
			printf("===========================================\n");
			printf(" =========\tGAME OVER\t=========\n");
			printf("===========================================\n");
			
		}
		
	sleep(2000);
	

	
}
