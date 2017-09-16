#include "Luchador.h"
#include <iostream>
#include <string>
using namespace std;
	Luchador::Luchador(string Nombre, int Wins, int Clases, int HP, int MAtk, int Atk, int MDef, int Def, int Passive, int Req, int Exp) { 
		setNombre(Nombre);
		setWins(Wins);
		setClases(Clases);
		setHP(HP);
		setMAtk(MAtk);
		setAtk(Atk);
		setMDef(MDef);
		setDef(Def);
		setPassive(Passive);
		setReq(Req);
		setExp(Exp);
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
	void Luchador::setPassive(int a) {
		this->Passive = a;
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
	int Luchador::getPassive() {
		return this->Passive;
	}
	int Luchador::getReq() {
		return this->Req;
	}
	int Luchador::getExp() {
		return this->Exp;
	}
