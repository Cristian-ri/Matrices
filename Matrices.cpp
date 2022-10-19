#include "Matrices.hpp"
#include<iomanip> //setw()
using std::setw;

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
	
	this->filas;
	this->columnas;
	
	
	for(int i=0; i<this->filas; i++){
		for(int j=0; j<this->columnas; j++){
			this->m[i][j] = 0;
		}	
	}	
}

//Destructor
Matrices::~Matrices(){
	
	for(int i=0; i<this->filas; i++){
		delete[] this->m[i];
	}
	delete[] this->m;
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

const int Matrices::getColumnas()const{
	
	return this->columnas;
}

//Mostrar Matriz
void Matrices::Mostrar(){
	
	for(int i=0; i<this->filas; i++){
		for(int j=0; j<this->columnas; j++){
			cout<<setw(6)<<this->m[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

//Llenar Matrices
void Matrices::LlenarMatrices(){
	
	cout<<"Ingrese los datos"<<endl;
	
	for(int i=0; i<this->filas; i++){
		for(int j=0; j<this->columnas; j++){
			cin>>this->m[i][j];
		}
	}
	cout<<endl;	
}

//Sobrecarga de operadores amigos

//Producto escalar de Matrices
Matrices &operator *=(const double &escalar, const Matrices &Matriz1){
	
	Matrices *Matriz2 = new Matrices(Matriz1.getFilas(), Matriz1.getColumnas());
	
	for(int i=0; i<Matriz1.getFilas(); i++){
		for(int j=0; j<Matriz1.getColumnas(); j++){
			Matriz2->m[i][j] = escalar * Matriz1.m[i][j];
		}
	}
	return *Matriz2;	
}




