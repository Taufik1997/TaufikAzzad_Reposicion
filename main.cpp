#include <iostream>
#include <string>
#include "Racional.h"


using namespace std;

int main(){
	Racional* racional1 = NULL;
	Racional* racional2 = NULL;
	int opcion = 0;
	do{
		cout<<"     Racionales\n1)Fraccion 1\n2)Fraccion 2\n3)Suma\n4)Resta\n5)Multiplicacion\n6)Division\n7)Salir\n";
		cin>>opcion;
		switch(opcion){
			case 1:{
				int numerador = 0, denominador = 1;
				cout<<"Ingrese el numerador de la primera fraccion:";
				cin>>numerador;
				cout<<"Ingrese el denominador de la primera fraccion:";
				cin>>denominador;
				racional1 = new Racional(numerador,denominador);
				break;				
			}
			case 2:{
				int numerador = 0, denominador = 1;
				cout<<"Ingrese el numerador de la segunda fraccion:";
				cin>>numerador;
				cout<<"Ingrese el denominador de la segunda fraccion:";
				cin>>denominador;
				racional2 = new Racional(numerador,denominador);
				break;
			}
			case 3:{
				if(racional1 != NULL||racional2 != NULL){
					Racional* respuesta;
					respuesta = *racional1 + *racional2;
					cout<<"La suma es de : "<<respuesta->toString();

				}else{
					cout<<"Debe crear las dos fracciones antes de hacer una operacion"<<endl;
				}
				
				break;
			}
			case 4:{
				if(racional1 != NULL||racional2 != NULL){
					Racional* respuesta;
					respuesta = *racional1 - *racional2;
					cout<<"La resta es de : "<<respuesta->toString();

				}else{
					cout<<"Debe crear las dos fracciones antes de hacer una operacion"<<endl;
				}

				break;
			};
			case 5:{
				if(racional1 != NULL||racional2 != NULL){
					Racional* respuesta;
					respuesta = *racional1 * *racional2;
					cout<<"La multiplicacion es de : "<<respuesta->toString();

				}else{
					cout<<"Debe crear las dos fracciones antes de hacer una operacion"<<endl;
				}

				break;
			};
			case 6:{
				if(racional1 != NULL||racional2 != NULL){
					Racional* respuesta;
					respuesta = *racional1 / *racional2;
					cout<<"La division es de : "<<respuesta->toString();

				}else{
					cout<<"Debe crear las dos fracciones antes de hacer una operacion"<<endl;
				}

				break;
			};
		}//Fin Switch 
	}while(opcion>=0 && opcion <=6);//Fin do while
	delete racional1;
	delete racional2;
	
	return 0;
}