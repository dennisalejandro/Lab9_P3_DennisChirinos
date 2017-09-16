#pragma once
#include <iostream>
#include <string>
#include "Luchador.h"
using namespace std;
class Node {
	private: 
		Luchador* Data;
		int ID;
		int Size;
	public: 
		Node* Next;
		Node(int, int);
		~Node();
		void  setNext(Node*);
		void  setData(Luchador*);
		//int*  getData();
		void  write(int, Luchador*);
		Luchador*  at(int);
		Node* NodeAt(int);
		Node* getNext();
		Luchador* getData();
		void setID(int);
		int getID();
};
