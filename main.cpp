#include <iostream>
#include <string>

using namespace std;

int main(){
	Racional* racional1;
	Racional* racional2;
	int opcion = 0;
	do{
		cout<<"     Racionales\n1)Fraccion 1\n2)Fraccion 2\n3)Suma\n4)Resta\n5)Multiplicacion\n6)Division\n7)Salir\n";
		cin>>opcion;
		switch(opcion){
			case 1:{
				int numerador = 0, denominador = 1;
				cout<<"Ingrese el numerador de la primera fraccion:"
				cin<<numerador;
				cout<<"Ingrese el denominador de la primera fraccion:"
				cin<<denominador;
				racional1 = new Racional(numerador,denominador);
				break;				
			}
			case 2:{
				int numerador = 0, denominador = 1;
				cout<<"Ingrese el numerador de la segunda fraccion:"
				cin<<numerador;
				cout<<"Ingrese el denominador de la segunda fraccion:"
				cin<<denominador;
				racional2 = new Racional(numerador,denominador);
				break;
			}
			case 3:{
				
				

				break;
			}
			case 4:{

				break;
			};
			case 5:{

				break;
			};
			case 6:{

				break;
			};
		}//Fin Switch 
	}while(opcion>=0 && opcion <=6);//Fin do while

	return 0;
}