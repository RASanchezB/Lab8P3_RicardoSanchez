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
						int opcionF;
						cout<<endl;
						cout<<"Flying"<<endl;
						cout<<"1)Boo"<<endl
						<<"2)Paratroopa"<<endl
						<<"Ingrese su opcion"<<endl;
						cin>>opcionF;
						switch (opcionF) {
							case 1:{
								cout<<"--Boo--"<<endl
								<<"Ingrese el nombre de su soldado"<<endl;
								string Nombre;
								cin>>Nombre;
								cout<<"Ingrese el HP"<<endl;
								int HP;
								cin>>HP;
								cout<<"Ingrese la habilidad"<<endl;
								string habilidad;
								cin>>habilidad;
								cout<<"Ingrese el color del boo"<<endl;
								string Color;
								cin>>Color;
								Minion* soldado = new Boo(Nombre,0,0,HP,8,0.20,0.35,"B",habilidad,Color);
								Cuarteles.push_back(soldado);
							}break;
							case 2:{
								cout<<"--Paratroopa--"<<endl;
								cout<<"Ingrese el nombre"<<endl;
								string Nombre;
								cin>>Nombre;
								cout<<"Ingrese el HP"<<endl;
								int HP;
								cin>>HP;
								cout<<"Ingrese la habilidad"<<endl;
								string habilidad;
								cin>>habilidad;
								cout<<"Ingrese el color del Magikoopa"<<endl;
								string Color;
								cin>>Color;
								Minion* soldado = new Paratroopa(Nombre,0,0,HP,9,0420,0.10,"P",habilidad,Color);
								Cuarteles.push_back(soldado);
							}break;
							default:{}break;
						}
					}break;
					case 3:{
						int opcionR;
						cout<<endl;
						cout<<"Range"<<endl;
						cout<<"1)HammerBro"<<endl
						<<"2)Magikoopa"<<endl
						<<"Ingrese su opcion"<<endl;
						cin>>opcionR;
						switch (opcionR) {
							case 1:{
								cout<<"--HammerBro--"<<endl;
								cout<<"Ingrese el nombre"<<endl;
								string Nombre;
								cin>>Nombre;
								cout<<"Ingrese el HP"<<endl;
								int HP;
								cin>>HP;
								cout<<"Ingrese el rango(en metros)"<<endl;
								int rango;
								cin>>rango;
								cout<<"Ingrese el Tamaño del martillo en cm"<<endl;
								int Tamano;
								cin>>Tamano;
								Minion* soldado = new HammerBro(Nombre,0,0,HP,6,0.15,0.30,"H",rango,Tamano);
								Cuarteles.push_back(soldado);
							}break;
							case 2:{
								cout<<"--Magikoopa--"<<endl;
								cout<<"Ingrese el nombre"<<endl;
								string Nombre;
								cin>>Nombre;
								cout<<"Ingrese el HP"<<endl;
								int HP;
								cin>>HP;
								cout<<"Ingrese el rango(en metros)"<<endl;
								int rango;
								cin>>rango;
								cout<<"Ingrese el color del Magikoopa"<<endl;
								string Color;
								cin>>Color;
								Minion* soldado = new Magikoopa(Nombre,0,0,HP,6,0.15,0.30,"H",rango,Color);
								Cuarteles.push_back(soldado);
							}break;
							default:{}break;
						}
					}break;
					default:{
						cout<<"No es una opcion valida."<<endl;
					}break;
				}

			}break;
			case 2:{
				if(Cuarteles.size() == 0){
					cout<<"No hay ningun tipo de solado"<<endl;
				}else{
					cout<<"Lista de soldados en el cuartel"<<endl;
					for (size_t i = 0; i < Cuarteles.size(); i++) {
						cout<<i<<")"<<Cuarteles.at(i)<<endl;
					}
				}
			}break;
			case 3:{}break;
			default:{}break;
		}
	}

	return 0;
}
