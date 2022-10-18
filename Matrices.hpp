#include <iostream>
using std::cout;
using std::cin;
using std::endl;


class Matrices{
	
	friend Matrices &operator *=(const double &, const Matrices &);
	
	public:
		//Constructor
		Matrices(const int, const int);
		//Constructor por defecto
		Matrices();
		
		//Destructor
		~Matrices();
		
		//Funciones miembros establecer
		void setFilas(const int);
		void setColumnas(const int);
		
		//Funciones miembro obtener
		const int getFilas()const;
		const int getFolumnas()const;
		
		//Mostrar Matriz
		void Mostrar();
		
		//Llenar Matriz
		void LlenarMatrices();
		
		
	private:
	int  **m;
	int filas, columnas;
	
};
