#pragma once
#include <iostream>
#include <string>
using namespace std;
class Object {
	private: 
	public: 
		Object();
		virtual bool Equals() = 0
		virtual void Clone() = 0
};
