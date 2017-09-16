#pragma once
#include <iostream>
#include <string>
using namespace std;
class Luchador {
	private: 
		string Nombre;
		int Wins;
		int Clases;
		int HP;
		int MAtk;
		int Atk;
		int MDef;
		int Def;
		int Passive;
		int Req;
		int Exp;
	public: 
		Luchador(string, int, int, int, int, int, int, int, int, int, int);
		void  setNombre(string);
		void  setWins(int);
		void  setClases(int);
		void  setHP(int);
		void  setMAtk(int);
		void  setAtk(int);
		void  setMDef(int);
		void  setDef(int);
		void  setPassive(int);
		void  setReq(int);
		void  setExp(int);
		string getNombre();
		int getWins();
		int getClases();
		int getHP();
		int getMAtk();
		int getAtk();
		int getMDef();
		int getDef();
		int getPassive();
		int getReq();
		int getExp();
};
