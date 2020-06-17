#include<iostream>
#include<string.h>

using namespace std;

struct Usuario(){

	string nombre;
	string apellido;
	string fechaNacimiento;
	string correo;
	string muro[10];
	string mensajes[50];
	
};

void main(){
	Usuario usuarios [10];
	int tamano = 10;
	int opcion;
	cout<<"============== RED SOCIAL ==============";
	cout<<"Ingrese su opcion";
	cout<<"1-Crear Usuario";
	cout<<"2-Autentificarme\n";
	cout<<"3-Enviar mensaje\n";
	cout<<"4-Ver mis mensajes\n";
	cout<<"5-Ver mi muro\n";
	cout<<"6-Salir\n";
	cin>>opcion;
	
	switch(opcion){
		
		case 1:
			string nombre;
			string apellido;
			string fechaNacimiento;
			string correo;
			cout<<"Ingrese su nombre"<<;
			cin>>usuarios[tamano].nombre;
			cout<<"Ingrese su apellido"<<;
			cin>>usuarios[tamano].apellido;
			cout<<"Ingrese su fecha de nacimiento"<<;
			cin>>usuarios[tamano].fechaNacimiento;
			cout<<"Ingrese su correo electronico"<<;
			cin>>usuarios[tamano].correo;
			cout<<usuarios[tamano].nombre;
			tamano++;
			
	
		break;
		case 2:
			
		break;
		case 3:
			
		break;
		case 4:
			
		break;
		case 5:
			
		break;
		case 6:
			
		break;
		default:
			
		cout<<"Tecla no valida";
		break;
		
	}

	
}
