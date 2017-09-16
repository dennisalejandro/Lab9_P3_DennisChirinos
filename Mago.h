#pragma once
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
class Mago :  public Luchador {
	private: 
	public: 
		Mago(string);
		virtual void Passive(int);
};
