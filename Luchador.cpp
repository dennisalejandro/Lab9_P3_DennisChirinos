#include "Luchador.h"
#include <iostream>
#include <string>
using namespace std;
	Luchador::Luchador(string Nombre) { 
		setNombre(Nombre);
		setWins(0);
		setClases(0);
		setHP(0);
		setMAtk(0);
		setAtk(0);
		setMDef(0);
		setDef(0);
		setReq(0);
		setExp(0);
		this->Gain = 0;
	}
	void Luchador::setNombre(string a) {
		this->Nombre = a;
	}
	void Luchador::setWins(int a) {
		this->Wins = a;
	}
	void Luchador::setClases(int a) {
		this->Clases = a;
	}
	void Luchador::setHP(int a) {
		this->HP = a;
	}
	void Luchador::setMAtk(int a) {
		this->MAtk = a;
	}
	void Luchador::setAtk(int a) {
		this->Atk = a;
	}
	void Luchador::setMDef(int a) {
		this->MDef = a;
	}
	void Luchador::setDef(int a) {
		this->Def = a;
	}
	void Luchador::Passive(int a) {

	}
	void Luchador::setReq(int a) {
		this->Req = a;
	}
	void Luchador::setExp(int a) {
		this->Exp = a;
	}
	string Luchador::getNombre() {
		return this->Nombre;
	}
	int Luchador::getWins() {
		return this->Wins;
	}
	int Luchador::getClases() {
		return this->Clases;
	}
	int Luchador::getHP() {
		return this->HP;
	}
	int Luchador::getMAtk() {
		return this->MAtk;
	}
	int Luchador::getAtk() {
		return this->Atk;
	}
	int Luchador::getMDef() {
		return this->MDef;
	}
	int Luchador::getDef() {
		return this->Def;
	}
	int Luchador::getReq() {
		return this->Req;
	}
	int Luchador::getExp() {
		return this->Exp;
	}
	int Luchador::getGain() {
		return this->Gain;
	}
	int Luchador::Action(int op, int Other) {
		int Act = 0;
		switch (op) {
			case 1: {
				Act = getMAtk();
			} break;
			case 2: {
				Act = getAtk();
			} break;
			case 3: {
				Act = 0;
				Passive(Other);
			} break;
			case 4: {
				Act = 0;
				setHP((getHP()/100)*45);
			} break;
			default: {
			
			} break;
		}
		return Act;
	}
	string Luchador::toString() {
		string ret = "";
		ret = getNombre() + ", " + to_string(getWins()) + ", " + to_string(getClases()) + ", " + to_string(getHP()) + ", " + to_string(getMAtk()) + ", " + to_string(getAtk()) + ", " + to_string(getMDef()) + ", " + to_string(getReq()) + ", " + to_string(getExp()) + ".";
		return ret;
	}
