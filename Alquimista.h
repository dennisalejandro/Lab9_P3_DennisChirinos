#pragma once
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
class Alquimista : public Luchador {
	private: 
	public: 
		Alquimista(string);
		virtual void Passive(int);
};
