#include "Flying.h"
#include "Minion.h"
#include <iostream>
#include <string>

using namespace std;

Flying::Flying(){}
Flying::Flying(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP,string pHabilidad):Minion(pNombre,pV,pX,pH,pF,pD,pVel,pP){
	Habilidad = pHabilidad;
}
string Flying::getHabilidad(){
	return Habilidad;
}
void Flying::setHabilidad(string pH){
	Habilidad = pH;
}
Flying::~Flying(){}
//virtual void Poder{}
//Virtual void Atacar(){}
