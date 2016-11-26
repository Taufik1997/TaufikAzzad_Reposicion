#include <string>
#include <sstream>
#include <iostream>
#include "Racional.h"


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

Racional* Racional::operator+(Racional racional){
  Racional* respuesta = new Racional();
  int numRacional = racional.getNumerador(), denRacional = racional.getDenominador();
  int resp1, resp2;
  resp1 = numerador*denRacional + denominador * numRacional;
  resp2 = denominador * denRacional ;
  respuesta->setNumerador(resp1);
  respuesta->setDenominador(resp2);

  return respuesta; 
}//fin metodo 

Racional* Racional::operator-(Racional racional){
  Racional* respuesta = new Racional();
  int numRacional = racional.getNumerador(), denRacional = racional.getDenominador();
  int resp1, resp2;
  resp1 =numerador*denRacional - denominador * numRacional;
  resp2 =denominador * denRacional;
  respuesta->setNumerador(resp1);
  respuesta->setDenominador(resp2);

  return respuesta; 
}//Fin metodo resta

Racional* Racional::operator*(Racional racional){
  Racional* respuesta = new Racional();
  int numRacional = racional.getNumerador(), denRacional = racional.getDenominador();
  int resp1, resp2;
  resp1 = numerador* numRacional;
  resp2 = denominador * denRacional;
  respuesta->setNumerador(resp1);
  respuesta->setDenominador(resp2);

  return respuesta; 
}

Racional* Racional::operator/(Racional racional){
  Racional* respuesta = new Racional();
  int numRacional = racional.getNumerador(), denRacional = racional.getDenominador();
  int resp1, resp2;
  resp1 = numerador*denRacional;
  resp2 = denominador * numRacional;
  while(resp1%2==0 && resp2%2==0){
    resp1= resp1/2;
    resp2= res2/2;
  }
  respuesta->setNumerador(resp1);
  respuesta->setDenominador(resp2);

  return respuesta; 
}



string Racional::toString(){
	stringstream ss;
	ss<<numerador<<"/"<<denominador<<endl;
	return ss.str();
}