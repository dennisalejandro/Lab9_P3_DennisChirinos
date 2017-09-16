#include "DragonBorn.h"
#include <iostream>
#include <string>
using namespace std;
	DragonBorn::DragonBorn(string Nombre) : Luchador(Nombre)  {
		setWins(0);
		setClases(0);
		setHP(200);
		setMAtk(25);
		setAtk(23);
		setMDef(getHP()/5);
		setDef(getHP()/5);
		setReq(400);
		setExp(0);
		this->Gain = 150;
	}
	void DragonBorn::Passive(int a){
		setMAtk(getMAtk()*2);
		setAtk(getAtk()*2);
	}
