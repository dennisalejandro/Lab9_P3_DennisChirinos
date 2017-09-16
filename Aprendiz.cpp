#include "Aprendiz.h"
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
	Aprendiz::Aprendiz(string Nombre) : Luchador(Nombre)  { 
		setWins(0);
		setClases(0);
		setHP(60);
		setMAtk(0);
		setAtk(10);
		setMDef(getHP()/10);
		setDef(getHP()/10);
		setReq(400);
		setExp(0);
		this->Gain = 25;	
	}
	void Aprendiz::setExp(int a) {
		this->Exp = (a*2);
	}
