#include "Matrices.hpp"
// Constructor
Matrices::Matrices(const int mi_filas, const int mi_columnas){
	
	this->filas = mi_filas;
	this->columnas = mi_columnas;
	
	m = new int *[filas];
	for(int i=0; i<this->filas; i++){
		this->m[i] = new int[columnas];	
	}	
}

//Constructor por defecto
Matrices::Matrices(){
	
	for(int i=0; i<this->filas; i++){
		for(int j=0; j<this->columnas; j++){
			this->m[i][j]= 0;
		}	
	}	
}

//Funciones miembros establecer
void Matrices::setFilas(const int mi_filas){
	
	this->filas = mi_filas;		
}

void Matrices::setColumnas(const int mi_columnas){
	
	this->columnas = mi_columnas;
}

//Funciones miembro obtener

const int Matrices::getFilas()const{
	
	return this->filas;
}

const int Matrices::getFolumnas()const{
	
	return this->columnas;
}

//Mostrar Matriz
void Matrices::Mostrar(){
	
	for(int i=0; i<this->filas; i++){
		for(int j=0; j<this->columnas; j++){
			cout<<this->m[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}




