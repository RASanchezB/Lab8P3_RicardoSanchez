#ifndef CHAINCHOMP_H
#define CHAINCHOMP_H

#include <iostream>
#include <string>
#include "Melee.h"

using namespace std;

class ChainChomp: public Melee {
	protected:
		string Color;
	public:
		ChainChomp();
		ChainChomp(string,int,int,int,int,double,double,string,int,string);
		string getColor();
		void setColor(string);
		~ChainChomp();
		//void Poder();
		//void Atacar();

};
#endif
