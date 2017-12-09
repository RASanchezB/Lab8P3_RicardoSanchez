#include <iostream>
#include <string>
#include <vector>
#include "Minion.h"
#include "Melee.h"
#include "Flying.h"
#include "Range.h"
#include "Goomba.h"
#include "ChainChomp.h"
#include "Boo.h"
#include "Paratroopa.h"
#include "HammerBro.h"
#include "Magikoopa.h"

using namespace std;

int main(){
	vector<Minion*> Cuarteles;
	cout<<endl;
	cout<<"Programacion 3 Lab 8"<<endl;
	int opcion;
	while(opcion != 4){
		cout<<"-----MENU-----"<<endl
		<<"1)Agregar Minion"<<endl
		<<"2)Agregar Equipo"<<endl
		<<"3)Simulacion de pelea"<<endl
		<<"4)Salir"<<endl
		<<"Ingrese la opcion que desea"<<endl
		<<""<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				cout<<endl;
				cout<<"Creando un nuevo minion"<<endl;
				int opcion2;
				cout<<"-Tipos de soldados-"<<endl
				<<"1)Melee"<<endl
				<<"2)Flying"<<endl
				<<"3)Range"<<endl
				<<"Ingrese la opcion que desea:"<<endl
				<<""<<endl;
				cin>>opcion2;
				switch (opcion2) {
					case 1:{
						int opcion3;
						cout<<endl;
						cout<<"---Tipos de Melee---"<<endl
						<<"1)Goomba"<<endl
						<<"2)ChainChomp"<<endl
						<<"Elija su opcion"<<endl
						<<""<<endl;
						cin>>opcion3;
						switch (opcion3) {
							case 1:{
								cout<<"--Goomba--"<<endl;
								cout<<"Ingrese un nombre para su soldado"<<endl;
								string Nombre;
								cin>>Nombre;
								cout<<"Ingrese la intimidacion (1-10)"<<endl;
								int Intimidacion;
								cin>>Intimidacion;
								cout<<"Ingrese el tamaño"<<endl;
								int Tamano;
								cin>>Tamano;
								cout<<"Ingrese la Hp (Entre 20 a 40)"<<endl;
								int HP;
								cin>>HP;
								Minion* soldado = new Goomba(Nombre,0,0,HP,10,0,0.65,"G",Intimidacion,Tamano);
								Cuarteles.push_back(soldado);
							}break;
							case 2:{
								cout<<"--ChainChomp--"<<endl;
								cout<<"Ingrese un nombre para su soldado"<<endl;
								string Nombre;
								cin>>Nombre;
								cout<<"Ingrese la intimidacion (1-10)"<<endl;
								int Intimidacion;
								cin>>Intimidacion;
								cout<<"Ingrese el color"<<endl;
								string Color;
								cin>>Color;
								cout<<"Ingrese la Hp (Entre 10 a 30)"<<endl;
								int HP;
								Minion* soldado = new ChainChomp(Nombre,0,0,HP,15,0.6,0.20,"CC",Intimidacion,Color);
								Cuarteles.push_back(soldado);
							}break;
							default:{
								cout<<"Opcion invalida"<<endl;
							}break;
						}

					}break;
					case 2:{
						cout<<endl;
						cout<<"Flying"<<endl;
						cout<<"1)Boo"<<endl
						<<"2)Paratroopa"<<endl;
					}break;
					case 3:{}break;
					default:{
						cout<<"No es una opcion valida."<<endl;
					}break;
				}

			}break;
			case 2:{}break;
			case 3:{}break;
			default:{}break;
		}
	}

	return 0;
}
