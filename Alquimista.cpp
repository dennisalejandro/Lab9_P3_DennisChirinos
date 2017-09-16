#include "Alquimista.h"
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
	Alquimista::Alquimista(string Nombre) : Luchador(Nombre) { 
		setWins(0);
		setClases(0);
		setHP(130);
		setMAtk(10);
		setAtk(10);
		setMDef(getHP()/5);
		setDef(getHP()/5);
		setReq(300);
		setExp(0);
		this->Gain = 0;
	}
	void Alquimista::Passive(int a){
		setHP(a+getHP());
	}
	
