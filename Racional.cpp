#include <string>
#include <sstream>
#include <iostream>
using std::stringstream;
using std::string;
using namespace std;

Racional::Racional(){

}


Racional::Racional(int numerador,int denominador){
	this->numerador = numerador;
  this->denominador= denominador;
}

void Racional::setNumerador(int num){
  numerador = num;
}

int Racional::getNumerador(){
  return numerador;
}

void Racional::setDenominador(int den){
  denominador = den;
}

int Racional::getDenominador(){
  return denominador;
}

Racional* Racional::operator+(Racional* racional){
  Racional* respuesta = new Racional();
  int numRacional = racional-> getNumerador(), denRacional = racional->getDenominador();
  respuesta.setNumerador = numerador*denRacional + denominador * numRacional;
  respuesta.setDenominador = denominador * denRacional;

  return respuesta; 
}//fin metodo 

Racional* Racional::operator-(Racional* racional){
  Racional* respuesta = new Racional();
  int numRacional = racional-> getNumerador(), denRacional = racional->getDenominador();
  respuesta.setNumerador = numerador*denRacional - denominador * numRacional;
  respuesta.setDenominador = denominador * denRacional;

  return respuesta; 
}//Fin metodo resta

Racional* Racional::operator*(Racional* racional){
  Racional* respuesta = new Racional();
  int numRacional = racional-> getNumerador(), denRacional = racional->getDenominador();
  respuesta.setNumerador = numerador* numRacional;
  respuesta.setDenominador = denominador * denRacional;

  return respuesta; 
}

Racional* Racional::operator*(Racional* racional){
  Racional* respuesta = new Racional();
  int numRacional = racional-> getNumerador(), denRacional = racional->getDenominador();
  respuesta.setNumerador = numerador*denRacional;
  respuesta.setDenominador = denominador * numRacional;

  return respuesta; 
}



string Racional::toString(){
	stringstream ss;
	ss<<numerador<<"/"<<denominador<<endl;
	return ss.str();
}