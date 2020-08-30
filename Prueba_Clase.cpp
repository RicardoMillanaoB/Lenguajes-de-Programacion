#include<iostream>	
#include <cmath>					
using namespace std;


class Calculadora{
	double resultado;
	char operador;
	double primerNumero;
	double segundoNumero;
	
	public: 
	
	void realizarOperacion();
	//getters and setters
	double obtenerResultado(){	return resultado;	}
	char obtenerOperador(){	return operador;	}
	double obtenerPrimerNumero(){	return primerNumero;	}
	double obtenerSegundoNumero(){	return segundoNumero;	}
	void setearPrimerNumero(double n){
		primerNumero = n;
	}
	void setearSegundoNumero(double n){
		segundoNumero = n;
	}
	void setearOperador(string op){
		/*
		A continuacion se recibe como parametro tipo string, esto para la situacion de la raiz cuadrada,
		por lo tanto se castea de string a char dependiendo a que caso
		*/
		if (op == "sqrt"){
			operador = 's';
		}else if(op.length() == 1){
		
			char aux[op.length()]; 
	   		int i; 
	    	for (i = 0; i < sizeof(aux); i++) { 
	      	  aux[i] = op[i]; 
	   		 }
		operador = aux[0];
		}
	}
};
void Calculadora::realizarOperacion(){
	switch (operador){ //Switch no funciona con string
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
			if(segundoNumero == 0){
				cout<<"\nDivision por cero";
				break;
			}
			resultado = primerNumero / segundoNumero;
			break;
		}
		case ('s'):{ 
			if(primerNumero < 0){
				cout<<"\nNumero negativo, no Existe su raiz cuadrada";
				break;
			}
			resultado = sqrt(primerNumero);
			break;
		}
	}	 
}
void imprimirOperacion(Calculadora c){
	//metodo adicional para tener un mejor orden y visualizacion	
	if(c.obtenerOperador() == 's'){
		printf("\n v%c(%f)%c= %f",253,c.obtenerPrimerNumero(),249,c.obtenerResultado());
		}else{
			printf("\n%f %c %f = ",c.obtenerPrimerNumero(),c.obtenerOperador(),c.obtenerSegundoNumero());cout<<c.obtenerResultado();
		}
	}
	
int main(){
	//Nota: para setear operador se utiliza comillas dobles
	//suma
	
	Calculadora calculo1;
	calculo1.setearPrimerNumero(4);
	calculo1.setearOperador("+");
	calculo1.setearSegundoNumero(4);
	calculo1.realizarOperacion();
	imprimirOperacion(calculo1);
	
	//resta
	Calculadora calculo2;
	calculo2.setearPrimerNumero(4);
	calculo2.setearOperador("-");
	calculo2.setearSegundoNumero(4);
	calculo2.realizarOperacion();
	imprimirOperacion(calculo2);
	
	//multiplicacion
	Calculadora calculo3;
	calculo3.setearPrimerNumero(4);
	calculo3.setearOperador("*");
	calculo3.setearSegundoNumero(4);
	calculo3.realizarOperacion();
	imprimirOperacion(calculo3);
	
	//division
	Calculadora calculo4;
	calculo4.setearPrimerNumero(4);
	calculo4.setearOperador("/");
	calculo4.setearSegundoNumero(4);
	calculo4.realizarOperacion();
	imprimirOperacion(calculo4);
	
	//raiz cuadrada
	Calculadora calculo5;
	calculo5.setearPrimerNumero(4);
	calculo5.setearOperador("sqrt");
	calculo5.realizarOperacion();
	imprimirOperacion(calculo5);
	

	

}
