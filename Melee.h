#ifndef MELEE_H
#define MELEE_H

#include <iostream>
#include <string>
#include "Minion.h"

using namespace std;

class Melee: public Minion{
	protected:
		int Intimidacion;
	public:
		Melee();
		Melee(string,int,int,int,int,double,double,string,int);
		int getIntimidacion();
		void setIntimidacion(int);
		virtual ~Melee();
		//virtual void Poder();
		//virtual void Atacar();

};
#endif
