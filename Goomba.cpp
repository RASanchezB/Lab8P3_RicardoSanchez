#include "Goomba.h"
#include "Melee.h"
#include <iostream>
#include <string>

using namespace std;
Goomba::Goomba(){}
Goomba::Goomba(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP,int pIntimidacion,int pTamano):Melee(pNombre,pV,pX,pH,pF,pD,pVel,pP,pIntimidacion){
	Tamano = pTamano;
}
int Goomba::getTamano(){
	return Tamano;
}
void Goomba::setTamano(int pT){
	Tamano = pT;
}
Goomba::~Goomba(){}
//void Goomba::Poder(){}
//void Goomba::Atacar(){}
