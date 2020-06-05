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

//En este juego la figura a encontrar es un 7
//El personaje inicializa en la posicion 4,4 y busca desde ahi a 7
void imprimirMatriz(int matrix [5][5]){
	int i,j;
//	printf("\n\n\n\n\n");
	for(i=0; i< 5; i++){	
		if(i == 0){
			//nada 
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
			}else if(i == 5 && j == 0){
				matriz[i][j] = 0;
			}else{
			int numeroRandom = rand()%2;
			matriz[i][j] = numeroRandom;
			}
		}
	}
	imprimirMatriz(matriz);
	
	gotoxy(0,0); 
	printf("7");
	
	printf("\n\n\n\n\n\n\n");
	
	//		VIDAS	//
	int vidas = 3;
	gotoxy(4,4);
	printf("8");
	int posicionX = 4;
	int posicionY = 4;//j+1
	
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
						if(posicionY == 0 && posicionX == 0){
								vidas = 8;
								gotoxy(0,17);
								printf("===========================================\n");
								printf(" =========\tGANASTE\t\t=========\n");
								printf("===========================================\n");
								
								break;
						}
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
						if(posicionY == 0 && posicionX == 0){
								vidas = 8;
								gotoxy(0,17);
								printf("===========================================\n");
								printf(" =========\tGANASTE\t\t=========\n");
								printf("===========================================\n");
								
								break;
						}
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
						if(posicionY == 0 && posicionX == 0){
								vidas = 8;
								gotoxy(0,17);
								printf("===========================================\n");
								printf(" =========\tGANASTE\t\t=========\n");
								printf("===========================================\n");
								
								break;
						}
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
						if(posicionY == 0 && posicionX == 0){
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
		gotoxy(40,0);
		printf("Vidas:%d || Tecla pulsada: ",vidas);
			
		}while (vidas != 0);
	
		if(vidas != 8){	
		
			gotoxy(0,18);
			printf("=============vidas acabadas==================\n");
			printf(" =========\tGAME OVER\t=========\n");
			printf("===========================================\n");
			
		}
		
	sleep(2000);
	

	
}
