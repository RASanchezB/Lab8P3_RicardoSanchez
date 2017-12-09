#include "Minion.h"
#include <iostream>
#include <string>

using namespace std;

Minion::Minion(){}
Minion::Minion(string pNombre,int pV,int pX,int pH,int pF,double pD,double pVel,string pP){
	Nombre = pNombre;
	Victorias = 0;
	XP = 0;
	HP = pH;
	Fuerza = pF;
	Def = pD;
	Vel = pVel;
	PoderE = pP;

}
string Minion::getNombre(){
	return Nombre;
}
int Minion::getVictorias(){
	return Victorias;
}
int Minion::getXP(){
	return XP;
}
int Minion::getHP(){
	return HP;
}
int Minion::getFuerza(){
	return Fuerza;
}
double Minion::getDef(){
	return Def;
}
double Minion::getVel(){
	return Vel;
}
string Minion::getPoderE(){
	return PoderE;
}
void Minion::setNombre(string pNombre){
	Nombre = pNombre;
}
void Minion::setVictoria(int pV){
	Victorias = pV;
}
void Minion::setXP(int pXP){
	XP = pXP;
}
void Minion::setHP(int pHP){
	HP = pHP;
}
void Minion::setFuerza(int pFuerza){
	Fuerza = pFuerza;
}
void Minion::setDef(double pDef){
	Def = pDef;
}
void Minion::setVel(double pVel){
	Vel = pVel;
}
void Minion::setPoderE(string p) {
	PoderE = p;
}
Minion::~Minion(){}
