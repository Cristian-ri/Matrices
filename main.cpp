#include "Matrices.hpp"

int main(int argc, char** argv) 
{
	
	Matrices M1(3,3), M3(3,3);
	M1.LlenarMatrices();
	M1.Mostrar();
	cout<<"**********************"<<endl;
	int x=3;
	M3 = x*=M1;
	M3.Mostrar();
	
	return 0;
}
