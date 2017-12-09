#include "Boo.h"
#include "Flying.h"
#include <iostream>
#include <string>

using namespace std;
Boo::Boo(){}
Boo::Boo(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP,string pHabilidad,string pColor):Flying(pNombre,pV,pX,pH,pF,pD,pVel,pP,pHabilidad){
	Color = pColor;
}
string Boo::getColor(){
	return Color;
}
void Boo::setColor(string pC){
	Color = pC;
}
Boo::~Boo(){}
//void Boo::Poder(){}
//void Boo::Atacar(){}
