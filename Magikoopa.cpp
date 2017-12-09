#include "Magikoopa.h"
#include "Range.h"
#include <iostream>
#include <string>

using namespace std;
Magikoopa::Magikoopa(){}
Magikoopa::Magikoopa(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP,int pRango,string pColor):Range(pNombre,pV,pX,pH,pF,pD,pVel,pP,pRango){
	Color = pColor;
}
string Magikoopa::getColor(){
	return Color;
}
void Magikoopa::setColor(string pC){
	Color = pC;
}
Magikoopa::~Magikoopa(){}
//void Magikoopa::Poder(){}
//void Magikoopa::Atacar(){}
