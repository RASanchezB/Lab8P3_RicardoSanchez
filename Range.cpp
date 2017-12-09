#include "Range.h"
#include "Minion.h"
#include <iostream>
#include <string>

using namespace std;

Range::Range(){}
Range::Range(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP,int pRango):Minion(pNombre,pV,pX,pH,pF,pD,pVel,pP){
	Rango = pRango;
}
int Range::getRango(){
	return Rango;
}
void Range::setRango(int r){
	Rango = r;
}
Range::~Range(){}
