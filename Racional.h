#ifndef RACIONAL_H
#define RACIONAL_H 
#include <string>

using std::string;
using namespace std;

class Racional{
private:
	int numerador;
	int denominador;
public:
	Racional(int,int);
	Racional();
	void setNumerador(int);
	int getNumerador();
	void setDenominador(int);
	int getDenominador();
	Racional* operator+(Racional*);
	Racional* operator-(Racional*);
	Racional* operator*(Racional*);
	Racional* operator/(Racional*);
	string toString();
};

#endif