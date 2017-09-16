#pragma once
#include <iostream>
#include <string>
using namespace std;
class Node {
	private: 
		Node* Next;
		Luchador* Data;
	public: 
		Node(Node*, Luchador*);
		void  setNext(Node*);
		void  setData(Luchador*);
		Node* getNext();
		Luchador* getData();
};
