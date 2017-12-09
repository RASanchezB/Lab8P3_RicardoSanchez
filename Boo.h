#ifndef BOO_H
#define BOO_H

#include <iostream>
#include <string>
#include "Flying.h"

using namespace std;

class Boo: public Flying {
	protected:
		string Color;
	public:
		Boo();
		Boo(string,int,int,int,int,double,double,string,string,string);
		string getColor();
		void setColor(string);
		~Boo();
		//void Poder();
		//void Atacar();

};
#endif
