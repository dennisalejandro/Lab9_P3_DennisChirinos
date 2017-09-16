#pragma once
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
class Aprendiz : public Luchador {
	private: 
	public: 
		Aprendiz(string);
		void setExp(int);
};
