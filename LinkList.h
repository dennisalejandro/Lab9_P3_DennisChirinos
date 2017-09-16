#pragma once
#include <iostream>
#include <string>
#include "Node.h"
#include "Luchador.h"
using namespace std;
class LinkList {
	private:
		Node* Root;
		int Size;
		int VisibleSize;
	public: 
		LinkList(int);
		~LinkList();
		void Write(int, Luchador*);
		Luchador* at(int);
		Node* NodeAt(int);
		int length();
		void Write(Luchador* Data);
		void remove(int);
};
