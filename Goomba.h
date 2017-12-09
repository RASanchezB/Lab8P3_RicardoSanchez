#ifndef GOOMBA_H
#define GOOMBA_H

#include <iostream>
#include <string>
#include "Melee.h"

using namespace std;

class Goomba: public Melee {
	protected:
		int Tamano;
	public:
		Goomba();
		Goomba(string,int,int,int,int,double,double,string,int,int);
		int getTamano();
		void setTamano(int);
		~Goomba();
		//void Poder();
		//void Atacar();

};
#endif
