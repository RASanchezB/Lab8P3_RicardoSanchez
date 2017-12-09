#include "Paratroopa.h"
#include "Flying.h"
#include <iostream>
#include <string>

using namespace std;
Paratroopa::Paratroopa(){}
Paratroopa::Paratroopa(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP,string pHabilidad,string pColor):Flying(pNombre,pV,pX,pH,pF,pD,pVel,pP,pHabilidad){
	Color = pColor;
}
string Paratroopa::getColor(){
	return Color;
}
void Paratroopa::setColor(string pC){
	Color = pC;
}
Paratroopa::~Paratroopa(){}
//void Paratroopa::Poder(){}
//void Paratroopa::Atacar(){}
