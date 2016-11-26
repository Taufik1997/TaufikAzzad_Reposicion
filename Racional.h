#ifndef RACIONAL_H
#define RACIONAL_H 
#include <string>

using std::string;

class Racional{
private:
	int numerador;
	int denominador;
public:
	Racional(int,int);
	Racional();
	virtual ~Racional();
	void setNumerador(int);
	int getNumerador();
	void setDenominador(int);
	int getDenominador();
	string toString();
};

#endif