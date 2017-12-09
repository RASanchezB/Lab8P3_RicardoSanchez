#ifndef HAMMERBRO_H
#define HAMMERBRO_H

#include <iostream>
#include <string>
#include "Range.h"

using namespace std;

class HammerBro: public Range {
	protected:
		int Tamano;
	public:
		HammerBro();
		HammerBro(string,int,int,int,int,double,double,string,int,int);
		int getTamano();
		void setTamano(int);
		~HammerBro();
		//void Poder();
		//void Atacar();

};
#endif
