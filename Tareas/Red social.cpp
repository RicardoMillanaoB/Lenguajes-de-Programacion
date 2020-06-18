#include<iostream>
#include<string.h>
#include <string>
using namespace std;

struct Usuario{

	string nombre;
	string apellido;
	string fechaNacimiento;
	string correo;
	string muro[10];
	string mensajes[10];
	
};
int main(){
	Usuario usuarios [10];
	int indice = 0;
	int opcion;

	do{

	
	cout<<"\n============== RED SOCIAL ==============";
	cout<<"\nIngrese su opcion";
	cout<<"\n1-Crear Usuario";
	cout<<"\n2-Autentificarme\n";
	cout<<"3-Enviar mensaje\n";
	cout<<"4-Ver mis mensajes\n";
	cout<<"5-Ver mi muro\n";
	cout<<"6-Salir\n";
	cin>>opcion;
	
	switch(opcion){
		
		case 1:{
			
		
			
			cout<<"\nIngrese su nombre: ";
			cin>>usuarios[indice].nombre;
			cout<<"\nIngrese su apellido: ";
			cin>>usuarios[indice].apellido;
			cout<<"\nIngrese su fecha de nacimiento: ";
			cin>>usuarios[indice].fechaNacimiento;
			cout<<"\nIngrese su correo electronico: ";
			cin>>usuarios[indice].correo;
			cout<<usuarios[indice].nombre;
			indice++;
			break;
	
		}
		case 2:{ //eror en mensaje, aparentemente
			
			string auxCorreo;
			bool estado = false;
			cout<<"\Ingrese su correo: ";
			cin>>auxCorreo;
			cout<<"\nEstado de la validacion es .. ";
			for(int i = 0; i < sizeof(usuarios); i++){
				if(auxCorreo == usuarios[i].correo){
					estado = true;
					break;//cortar el ciclo
						}else{
						estado = false;	
					}
				}
			
			if(estado){		
			cout<<"CORRECTO";
			}else{
				cout<<"INCORRECTO";
			}
		
			break;	
		}
			
		case 3: {//error
			
		
			string auxCorreo;
			int indice;
			bool estado = false;
			cout<<"\nIngrese su correo para validar: ";
			cin>>auxCorreo;
			for(int i = 0; i < sizeof(usuarios); i++){
				if(auxCorreo == usuarios[i].correo){
					estado = true;
					indice = i;
					break;//cortar el ciclo
						}else{
						estado = false;	
				}
			}
			
			if(estado){
				
				string destinatario;
				int indiceDestinatario;
				bool estadoDestinatario = false;
					
				do{
				
					cout<<"\nIngrese su correo del destinatario: ";
					cin>>destinatario;
				
					for(int i = 0; i < sizeof(usuarios); i++){
						if(destinatario == usuarios[i].correo){
							estadoDestinatario = true;
							indiceDestinatario = i;
							break;//cortar el ciclo
							}else{
								estadoDestinatario = false;	
							}
						}
				
					if(estadoDestinatario == false){
						cout<<"\nDestinatario no encontrado ";
					}
				
				}while(estadoDestinatario == false);
		
				cout<<"\nIngrese el mensaje a "+usuarios[indiceDestinatario].nombre+"\n";
				int indiceMensajeria;
				for(int i = 0; i < sizeof(usuarios[indiceDestinatario].mensajes);i++){
					if(usuarios[indiceDestinatario].mensajes[i].empty()){//retorna true si es que está vacio
						indiceMensajeria = i;
						break;
							
						}
					}
						cin>>usuarios[indiceDestinatario].mensajes[indiceMensajeria];
						//comprobar si envio mensaje
						cout<<"\nAl usuario "+usuarios[indiceDestinatario].nombre+" se envio:\n\t"+usuarios[indiceDestinatario].mensajes[indiceMensajeria];
						
				}
					break;
						
			}
			
		case 4: {
			string auxCorreo;
			int indice;
			bool estado = false;
			cout<<"\nIngrese su correo para validar: ";
			cin>>auxCorreo;
			for(int i = 0; i < sizeof(usuarios); i++){
				if(auxCorreo == usuarios[i].correo){
					estado = true;
					indice = i;
					break;//cortar el ciclo
						}else{
						estado = false;	
				}
			}
				
			if(estado){
			cout<<"\nBienvenido "+usuarios[indice].nombre+" a tus mensajes\nA continuacion tus mensajes\n";
			for(int i = 0; i < sizeof(usuarios[indice].mensajes);i++){
				if(usuarios[indice].mensajes[i].empty()){
					//no hace nada por aqui
				}else{
				cout<<"\n-> "+usuarios[indice].mensajes[i];
				}
			 }
		
			
			}
			break;
		}
		
		case 5:{//error
			int opcionMuro;
			
			string auxCorreo;
			int indice;
			int indicePostear;
			bool estado = false;
			cout<<"\nIngrese su correo para validar: ";
			cin>>auxCorreo;
			for(int i = 0; i < sizeof(usuarios); i++){
				if(auxCorreo == usuarios[i].correo){
					estado = true;
					indice = i;
					break;//cortar el ciclo
						}else{
						estado = false;	
				}
			}
				
			if(estado){
			
			cout<<"\nIngrese la opcion:";
			cout<<"\n1-Postear en el muro";
			cout<<"\n2-Ver mi muro:";
			cin>>opcionMuro;
				switch(opcionMuro){
					
					case 1:{
						cout<<"\nQue estás pensando postear?: ";
						for(int i = 0; i < sizeof(usuarios[indice].muro);i++){
							if(usuarios[indice].muro[i].empty() == true){//retorna true si es que está vacio
								indicePostear = i;
								break;
								}
							}
								cin>>usuarios[indice].muro[indicePostear];
								//comprobar 
								cout<<"\nEl usuario "+usuarios[indice].nombre+" a posteado:\n\t"+usuarios[indice].muro[indicePostear];
								
								break;
							}
							
					case 2:{
						
						cout<<"\nBienvenido "+usuarios[indice].nombre+" a tus muro\nA continuacion tus posteos\n";
						for(int i = 0; i < sizeof(usuarios[indice].muro);i++){
							if(usuarios[indice].muro[i].empty()){
								//no hace nada por aqui
							}else{
							cout<<"\n-> "+usuarios[indice].muro[i];
							}
						 }
		
						
						break;
					}
					default:{
						//caso default
						break;
					}
				}
			
			}
			
			break;
		}
		case 6:{
			//se termina el ciclo
			break;
		}
		
		
		default:{
			//caso default
			break;
			}
					
		}
	
	
	}while(opcion != 6);
	
}
