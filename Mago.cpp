#include "Mago.h"
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
	Mago::Mago(string Nombre) : Luchador(Nombre) { 
		setWins(0);
		setClases(0);
		setHP(100);
		setMAtk(15);
		setAtk(0);
		setMDef((getHP()/100)*30);
		setDef(0);
		setReq(200);
		setExp(0);
		this->Gain = 75;	
	}
	void Mago::Passive(int a){
		setHP(a+getHP());
	}
