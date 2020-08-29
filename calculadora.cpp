#include<iostream>	
#include <cmath>					
using namespace std;


class Calculadora{
	string operador;
	double primerNumero;
	double segundoNumero;
	double resultado;
	
	public: 
	void realizarOperacion(char op);
	double obtenerResultado(){
		return resultado;
	}
	void setearPrimerNumero(double n){
		primerNumero = n;
	}
	void setearSegundoNumero(double n){
		segundoNumero = n;
	}
	
};
void Calculadora::realizarOperacion(char op){
	switch (op){
		case ('+'):{
			resultado = primerNumero + segundoNumero;
			break;
		}
		case ('-'):{
			resultado = primerNumero - segundoNumero;
			break;
		}
		case ('*'):{
			resultado = primerNumero * segundoNumero;
			break;
		}
		case ('/'):{
			resultado = primerNumero / segundoNumero;
			break;
		}
		case ('s'):{
			resultado = sqrt(primerNumero);
			break;
		}
	}	 
}


int main(){
	Calculadora calculo1;
	calculo1.setearPrimerNumero(4);
	calculo1.realizarOperacion('+');
	calculo1.setearSegundoNumero(4);
	calculo1.obtenerResultado();
