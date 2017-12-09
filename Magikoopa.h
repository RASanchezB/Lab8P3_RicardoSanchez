#ifndef MAGIKOOPA_H
#define MAGIKOOPA_H

#include <iostream>
#include <string>
#include "Range.h"

using namespace std;

class Magikoopa: public Range {
	protected:
		string Color;
	public:
		Magikoopa();
		Magikoopa(string,int,int,int,int,double,double,string,int,string);
		string getColor();
		void setColor(string);
		~Magikoopa();
		//void Poder();
		//void Atacar();

};
#endif
