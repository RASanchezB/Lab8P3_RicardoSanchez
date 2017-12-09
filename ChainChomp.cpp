#include "ChainChomp.h"
#include "Melee.h"
#include <iostream>
#include <string>

using namespace std;
ChainChomp::ChainChomp(){}
ChainChomp::ChainChomp(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP,int pIntimidacion, string pColor):Melee(pNombre,pV,pX,pH,pF,pD,pVel,pP,pIntimidacion){
	Color = pColor;
}
string ChainChomp::getColor(){
	return Color;
}
void ChainChomp::setColor(string C){
	Color = C;
}
ChainChomp::~ChainChomp(){}
//void ChainChomp::Poder(){}
//void ChainChomp::Atacar(){}
