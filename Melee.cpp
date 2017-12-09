#include "Melee.h"
#include "Minion.h"
#include <iostream>
#include <string>

using namespace std;

Melee::Melee(){}
Melee::Melee(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP, int pIntimidacion):Minion(pNombre,pV,pX,pH,pF,pD,pVel,pP){
	Intimidacion = pIntimidacion;
}
int Melee::getIntimidacion(){
	return Intimidacion;
}
void Melee::setIntimidacion(int pI){
	Intimidacion = pI;
}
Melee::~Melee(){}
