#include "Guerrero.h"
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
	Guerrero::Guerrero(string Nombre) : Luchador(Nombre)  {
		setWins(0);
		setClases(0);
		setHP(130);
		setMAtk(10);
		setAtk(10);
		setMDef(0);
		setDef((getHP()/100)*30);
		setReq(300);
		setExp(0);
		this->Gain = 100;
	}
	void Guerrero::Passive(int a){

	}
