#include <iostream>
#include <string>
#include <sstream>
#include <fstream>


//Creacion de una pagina html
using namespace std;


class Pagina{
	public:
		Pagina(string titulo,string encabezado,string d);
		ofstream archivoPagina;
		string encabezado;
		string titulo;
		string descripcion;
		
};
Pagina::Pagina(string t,string e,string d){
	
	titulo = t;
	encabezado = e;
	descripcion = d;
}
class Enlace{
	public:
		Enlace(string nombreEnlace,string url);
		string nombreEnlace;
		string url;
};
Enlace::Enlace(string n,string u){
	nombreEnlace = n;
	url = u;
}
class Imagen{
	public:
		Imagen(string nombre,string urlImagen);
		string nombre;
		string urlImagen;
};
Imagen::Imagen(string n,string u){
	nombre = n;
	urlImagen = u;
}

int main(){
	Pagina pagina("","","");//Pagina creada con valores vacios
	Enlace enlace("","");
	Imagen imagen("","");
	
	stringstream ss;

	/*	
	ss<<"<head>"
	
  	  <<"<title>Document</title>"
	<<"</head>"
	<<"<body>"
    	<<"<img src="<<"https://www.ufro.cl/templates/ufro_portadaversion2.0/images/logo2.jpg>" <<"alt="<<"Flowers in Chania"<<">"
    	<<"<h1>Título de la web</h1>"
    	<<"<p>texto de bienvenida.</p>"

    	<<"<a href="<<"https://www.google.com/"	<<">Google</a>"
		<<"<a href="<<"https://www.youtube.com/"<<">Youtube</a>"
	<<"</body>"
	<<" </html>";
*/
	

	int opcion;
	do{
	

	cout<<"\n====== Menu ======\n";
	cout<<"\nIngrese la opcion";
	cout<<"\n1-Abrir un archivo creado por ud";
	cout<<"\n2-Crear un encabezado con imagen";
	cout<<"\n3-Crear un titulo";
	cout<<"\n4-Agregar texto";
	cout<<"\n5-Crear N enlaces de sitios web externos";
	cout<<"\n6-Generar sitio web en formato html";
	cout<<"\n7-Guardar el sitio web creado por ud";
	cout<<"\n8-Salir\n->";
	cin>>opcion;
	
	switch(opcion){
		
		case 1:{//Abre un archivo creado por el usuario
			
			ofstream MyFile("prueba.html");
			pagina.archivoPagina = MyFile;
			cout<<"\nArchivo creado con exito,\nAbriendo..";
	
			break;
		}
		case 2:{
				cout<<"Ingrese un nombre para la imagen: ";
				cin>>imagen.nombre;
				cout<<"Ingrese una direccion url para la imagen: ";
				cin>>imagen.urlImagen;
				cout<<"Ingrese un encabezado: ";
				cin>>plantilla.encabezado;
			
	
		  	 	ss<<"<head>"
	
		  	  <<"<title>"<<plantilla.titulo<<"</title>"
			<<"</head>"
			<<"<body>"
		    	<<"<img src="<<imagen.urlImagen<<" alt="<<imagen.nombre<<">"
		    	<<"<h1>"<<plantilla.encabezado<<"</h1>"
		    	<<"<p>"<<plantilla.descripcion<<"</p>"
		
		    	//<<"<a href="<<"https://www.google.com/"	<<">Google</a>"
				//<<"<a href="<<"https://www.youtube.com/"<<">Youtube</a>"
			<<"</body>"
			<<" </html>";
			
				MyFile<<ss.str(); //rellena el texto
				MyFile.close();
			
			break;
		}
		case 3:{
			cout<<"Ingrese un titulo para la pagina: ";
			cin>>plantilla.titulo;	
			
				ss<<"<head>"
	
		  	  <<"<title>"<<plantilla.titulo<<"</title>"
			<<"</head>"
			<<"<body>"
		    	<<"<img src="<<imagen.urlImagen<<" alt="<<imagen.nombre<<">"
		    	<<"<h1>"<<plantilla.encabezado<<"</h1>"
		    	<<"<p>"<<plantilla.descripcion<<"</p>"
		
		    	//<<"<a href="<<"https://www.google.com/"	<<">Google</a>"
				//<<"<a href="<<"https://www.youtube.com/"<<">Youtube</a>"
			<<"</body>"
			<<" </html>";
			
				MyFile<<ss.str(); //rellena el texto
				MyFile.close();
			
			break;
		}
		case 4:{
			cout<<"Agrege texto a la pagina: ";
				cin>>plantilla.descripcion;
						
				ss<<"<head>"
	
		  	  <<"<title>"<<plantilla.titulo<<"</title>"
			<<"</head>"
			<<"<body>"
		    	<<"<img src="<<imagen.urlImagen<<" alt="<<imagen.nombre<<">"
		    	<<"<h1>"<<plantilla.encabezado<<"</h1>"
		    	<<"<p>"<<plantilla.descripcion<<"</p>"
		
		    	//<<"<a href="<<"https://www.google.com/"	<<">Google</a>"
				//<<"<a href="<<"https://www.youtube.com/"<<">Youtube</a>"
			<<"</body>"
			<<" </html>";
			
				MyFile<<ss.str(); //rellena el texto
				MyFile.close();
			break;
		}
			
		}
	
	}while(opcion!=8);
	return 0;
}

	/*
		string myText;
		ifstream MyReadFile("prueba.html");
		cout<<"\nImpresion del archivo\n:";
	//Imprime informacionacion del archivo
	while (getline (MyReadFile, myText)) {
	  // Output the text from the file
	  cout << myText;
	}
	*/
	

