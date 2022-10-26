#include "Matrices.hpp"
#include<string>
using std::string;

void Menu(const int);

int main() 
{
	
	int opp;
	cout<<"**************************"<<endl;
	cout<<"Operaciones con Matrices."<<endl;
	cout<<"1. Producto Escalar."<<endl;
	cout<<"2. Suma de Matrices. "<<endl;
	cout<<"3.Producto de Matricial."<<endl;
	cout<<"**************************"<<endl;
	cout<<"Solucion de Sistema."<<endl;
	cout<<"4. Gauss-Jordan."<<endl;
	cout<<"5.Salir."<<endl;
	cout<<endl;
	cout<<"Ingrese su eleccion: ";
	cin>>opp;
	Menu(opp);

	return 0;
}


void Menu(const int op){
	
	string elegir;
	int f, c, x;
	int ff, cc;
	cout<<"Matriz 1"<<endl;
	cout<<"Ingrese el numero de filas: ";
	cin>>f;
	cout<<"Ingrese el numero de columnas: ";
	cin>>c;
	cout<<endl;
	cout<<"Matriz 2"<<endl;
	cout<<"Ingrese el numero de filas: ";
	cin>>ff;
	cout<<"Ingrese el numero de columnas: ";
	cin>>cc;
	cout<<endl;
	
	Matrices M1(f,c), M2(ff,cc);
	Matrices M3(0,0);
	
	switch(op){
		
		case 1:
			cout<<"1. Producto Escalar."<<endl;
			cout<<endl;
			cout<<"Ingrese el escalar:";
			cin>>x;
			cout<<endl;
			M1.LlenarMatrices();
			M1.Mostrar();
			M3 = x*=M1;
			M3.Mostrar();
			break;
			
		case 2:
			cout<<"Suma de Matrices."<<endl;
			M1.LlenarMatrices();
			M2.LlenarMatrices();
			M1.Mostrar();
			M2.Mostrar();
			M3 = M1 + M2;
			M3.Mostrar();
			break;
			
		case 3:
			cout<<"Producto Matricial."<<endl;
			M1.LlenarMatrices();
			M2.LlenarMatrices();
			M1.Mostrar();
			M2.Mostrar();
			M1.Producto(&M1,&M2);
			M1.Mostrar();
			break;
			
		case 4:
			cout<<"Lo sentimos no disponible."<<endl;
			break;
			
		case 5:
			cout<<"¿Si o No?"<<endl;
			cin>>elegir;
			if(elegir == "Si"){
				exit(0);
			}		
			else
				cout<<"Opcion no valido."<<endl;
				
			default:
				cout<<"Opcion no valida."<<endl;	
		}
}
