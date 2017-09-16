#pragma once
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
class DragonBorn :  public Luchador {
	private: 
	public: 
		DragonBorn(string);
		virtual void Passive(int);
};
