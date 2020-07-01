#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
class Pixel{
	public:
	int pintado;
	int identificador;
	int posicionX;
	int posicionY;
};
class Cuadrado{
	public:
//	Cuadrado(int identificador);
	int identificador;
	Pixel pixel[4];
	void mover(int direccion,Cuadrado cuadrado);	
};
//Cuadrado::Cuadrado(int i){
//	identificador = i;
//}
void Cuadrado::mover(int direccion,Cuadrado cuadrado){
	switch(direccion){
	case 1:{
		for(int i = 0; i < 4;i++){
					cuadrado.pixel[i].posicionX--;
					cuadrado.pixel[i].posicionX -= 1;
				}
		break;
	case 2:{
		for(int i = 0; i < sizeof(cuadrado.pixel);i++){
					cuadrado.pixel[i].posicionX++;
					//cuadrado.pixel[i].posicionY++;
					cuadrado.pixel[i].posicionX++;
					//cuadrado.pixel[i].posicionY++;
				}
		break;
		}
	  }
	}
}

class Mapa{
	public:
		Pixel pixeles[20][20];
		char matrizMostrada [20][20];	
};
class Figura{
	public:		
	Cuadrado cuadrados[20];
};

void gotoxy(int x, int y) 
    { 
        HANDLE hCon; 
        COORD dwPos; 
     
        dwPos.X = x; 
        dwPos.Y = y; 
        hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
        SetConsoleCursorPosition(hCon,dwPos); 
    }
void pintar(){  
         for(int i=2; i < 12; i++){
            gotoxy (i, 3); printf ("%c", 205);
            gotoxy(i, 19); printf ("%c", 205); 
            }
         for(int j=4; j < 19; j++){
            gotoxy (2,j);  printf ("%c", 186);
            gotoxy(11,j);  printf ("%c", 186); 
            }
         gotoxy  (2,3);    printf ("%c", 201);
         gotoxy (2,19);    printf ("%c", 200);
         gotoxy (11,3);    printf ("%c", 187);
         gotoxy(11,19);    printf ("%c", 188); 
       }  
void crearCuadrado(Cuadrado cuadrado){
		//================inciar el cuadrado ===========
	for(int i = 0; i < sizeof(cuadrado.pixel); i++){
	cuadrado.pixel[i].pintado = cuadrado.identificador;
	}
	cuadrado.pixel[0].posicionX = 4;	cuadrado.pixel[0].posicionY = 0;
	cuadrado.pixel[1].posicionX = 5;	cuadrado.pixel[1].posicionY = 0;	
	cuadrado.pixel[2].posicionX = 4;	cuadrado.pixel[2].posicionY = 1;
	cuadrado.pixel[3].posicionX = 5;	cuadrado.pixel[3].posicionY = 1;

	//==============================================
}

iniciarMapa(Mapa mapa){
	int contX = 0;
	int contY = 0;
	
	for(int i = 0; i < 20;i++){
		if(i != 0){contY++;}
		for(int j = 0; j < 20;j++){
			if(contX>19){ contX = 0; }
			mapa.pixeles[i][j].posicionX = contX;
			contX++;
			mapa.pixeles[i][j].posicionY = contY;
		
			mapa.pixeles[i][j].identificador = 0;	
		}
	}
	for(int i = 0; i < 20; i++){
		cout<<"\n";
		for(int j = 0; j < 20; j++){
			cout<<mapa.pixeles[i][j].posicionX;cout<<",";cout<<mapa.pixeles[i][j].posicionY;cout<<"\t";
			
		}
	}
}
int main(){
	Mapa mapa;
	
	Cuadrado cuadrado1;
	cuadrado1.identificador = 4; 
	Figura figuras;
	figuras.cuadrados[0] = cuadrado1;
	
	crearCuadrado(cuadrado1);
	iniciarMapa(mapa);	
//	while(true){
	gotoxy(0,0);

	gotoxy(40,0);
	printf(" Tecla pulsada: ");
	char tecleo;
	tecleo = getche();
	cout<< tecleo;
	/*
	switch(tecleo){
				
		case 'a':{
				//cuadrado.mover(1,cuadrado); 
				
			if(figuras.cuadrados[0].pixel[0].posicionX > 0 && figuras.cuadrados[0].pixel[2].posicionX > 0){
				for(int i = 0; i < sizeof(cuadrado.pixel);i++){
					figuras.cuadrados.pixel[i].posicionX--; 
				}
			}
				
			gotoxy(0,0);
			verificarMapa(mapa,figuras);	
				
			break;
		}
	
		case 'd':{
			
			if(cuadrado.pixel[1].posicionX < 9  && cuadrado.pixel[3].posicionX < 9){
				for(int i = 0; i < sizeof(cuadrado.pixel);i++){
					cuadrado.pixel[i].posicionX++; 
				}
			}
				
			gotoxy(0,0);
			verificarMapa(mapa,figuras);	
				
			break;
		}
		
		case 's':{
			
			if(cuadrado.pixel[1].posicionY < 14  && cuadrado.pixel[3].posicionY < 14){
			for(int i = 0; i < sizeof(cuadrado.pixel);i++){
					cuadrado.pixel[i].posicionY++; 
				}
			}
				
			gotoxy(0,0);
			verificarMapa(mapa,figuras);
				
			break;
			}
			
		}*/
		}
//	pintar();
//	gotoxy(3,5);
	

	
	/*for(int i = 0; i < 300; i++){
		printf("%d:%c\t",i,i);
	}*/	

	
	




