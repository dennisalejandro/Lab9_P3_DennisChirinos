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
		int Req;
	protected:
		int Gain;
		int Exp;
	public: 
		Luchador(string);
		void  setNombre(string);
		void  setWins(int);
		void  setClases(int);
		void  setHP(int);
		void  setMAtk(int);
		void  setAtk(int);
		void  setMDef(int);
		void  setDef(int);
		virtual void Passive(int);
		void  setReq(int);
		virtual void setExp(int);
		string getNombre();
		int getWins();
		int getClases();
		int getHP();
		int getMAtk();
		int getAtk();
		int getMDef();
		int getDef();
		int getReq();
		int getExp();
		int getGain();
		virtual string toString();
		virtual int Action(int, int);
};
