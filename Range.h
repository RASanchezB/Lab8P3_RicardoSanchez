#ifndef RANGE_H
#define RANGE_H

#include <iostream>
#include <string>
#include "Minion.h"

using namespace std;

class Range: public Minion{
	protected:
		int Rango;
	public:
		Range();
		Range(string,int,int,int,int,double,double,string,int);
		int getRango();
		void setRango(int);
		virtual ~Range();
		//virtual void Poder();
		//virtual void Atacar();

};
#endif
