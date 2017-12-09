#ifndef MINION_H
#define MINION_H

#include <iostream>
#include <string>
using namespace std;

class Minion{
	protected:
		string Nombre;
		int Victorias;
		int XP;
		int HP;
		int Fuerza;
		double Def;
		double Vel;
		string PoderE;
	public:
		Minion();
		Minion(string,int,int,int,int,double,double,string);
		string getNombre();
		int getVictorias();
		int getXP();
		int getHP();
		int getFuerza();
		double getDef();
		double getVel();
		string getPoderE();
		void setNombre(string);
		void setVictoria(int);
		void setXP(int);
		void setHP(int);
		void setFuerza(int);
		void setDef(double);
		void setVel(double);
		void setPoderE(string);
		virtual ~Minion();
		//virtual void Atacar();
		//virtual void Poder();
};
#endif
