#include <iostream>
#include<fstream>

using namespace std;


int main(){

	// Modo escritura
	ofstream salida;
	
	salida.open("sample.csv");
	salida<<"Nombre"<<','<<"Edad"<<','<<"Calificación"<<endl;
	salida<<"Bruno"<<','<<31<<','<<10<<"\n";
	salida<<"Saskia"<<','<<26<<','<<10<<"\n";
	salida.close();
	
	// Modo lectura
	ifstream entrada;
	
	// Verificar que el archivo está en buen estado
	
	entrada.open("sample.csv");
	if (entrada.good()){
		cout<<"Archivo en buen estado"<<"\n\n";
	}
	else{
		cout<<"Archivo en mal estado"<<'\n';
	}
	entrada.close();
	
	char linea[80];
	entrada.open("sample.csv");
	
	while(!entrada.eof()){
		entrada.getline(linea, 80);
		cout<<linea<<endl;
	}
	
	entrada.close();
	
	return 0;
}


