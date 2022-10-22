#include "Matrices.hpp"

int main(int argc, char** argv) 
{
	
	Matrices M1(3,3), M2(3,3);
	Matrices M3(3,3);
	M1.LlenarMatrices();
	cout<<"Matriz 1"<<endl;
	M1.Mostrar();
	cout<<"**********************"<<endl;
	cout<<"Producto escalar 3*Matriz 1"<<endl;
	int x=3;
	M2 = x*=M1;
	M2.Mostrar();
	cout<<"**********************"<<endl;
	cout<<"Suma de Matriz 1 + Matriz 2"<<endl;
	M3 = M1 + M2;
	M3.Mostrar();
	
	cout<<"***********************"<<endl;
	M3.Producto(&M1,&M2);
	
	
	return 0;
}
