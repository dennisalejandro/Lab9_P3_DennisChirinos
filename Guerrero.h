#pragma once
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
class Guerrero : public Luchador{
	private: 
	public: 
		Guerrero(string);
		virtual void Passive(int);
};
