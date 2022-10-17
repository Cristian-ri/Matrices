#include <iostream>
using std::cout;
using std::cin;
using std::endl;


class Matrices{
	
	public:
		//Constructor
		Matrices(const int, const int);
		//Constructor por defecto
		Matrices();
		
		//Funciones miembros establecer
		void setFilas(const int);
		void setColumnas(const int);
		
		//Funciones miembro obtener
		const int getFilas()const;
		const int getFolumnas()const;
		
		//Mostrar Matriz
		void Mostrar();
		
		
	private:
	int  **m;
	int filas, columnas;
	
};
