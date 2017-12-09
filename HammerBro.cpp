#include "HammerBro.h"
#include "Range.h"
#include <iostream>
#include <string>

using namespace std;
HammerBro::HammerBro(){}
HammerBro::HammerBro(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP,int pRango,int pTamano):Range(pNombre,pV,pX,pH,pF,pD,pVel,pP,pRango){
	Tamano = pTamano;
}
int HammerBro::getTamano(){
	return Tamano;
}
void HammerBro::setTamano(int pT){
	Tamano = pT;
}
HammerBro::~HammerBro(){}
//void HammerBro::Poder(){}
//void HammerBro::Atacar(){}
