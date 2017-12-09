#ifndef PARATROOPA_H
#define PARATROOPA_H

#include <iostream>
#include <string>
#include "Flying.h"

using namespace std;

class Paratroopa: public Flying {
	protected:
		string Color;
	public:
		Paratroopa();
		Paratroopa(string,int,int,int,int,double,double,string,string,string);
		string getColor();
		void setColor(string);
		~Paratroopa();
		//void Poder();
		//void Atacar();

};
#endif
