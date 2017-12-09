#ifndef FLYING_H
#define FLYING_H

#include <iostream>
#include <string>
#include "Minion.h"

using namespace std;

class Flying: public Minion{
	protected:
		string Habilidad;
	public:
		Flying();
		Flying(string,int,int,int,int,double,double,string,string);
		string getHabilidad();
		void setHabilidad(string);
		virtual ~Flying();
		//virtual void Poder();
		//virtual void Atacar();
};
#endif
