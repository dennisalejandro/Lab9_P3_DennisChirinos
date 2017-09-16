#include "Node.h"
#include "Luchador.h"
#include <iostream>
#include <string>
using namespace std;
	Node::Node(int ID, int size) {
		cout << ID << "\n";
		this->ID = ID;
		this->Size = size;
		if ((ID < this->Size)) {
			cout << "Node Created!";
			this->Next = new Node(this->ID+1, size);
		}
	}
	Node::~Node() {
		delete Next;
		delete Data;
		cout << "BOOM! \n";
	}
	void Node::setNext(Node* a) {
		this->Next = a;
	}
	void Node::setData(Luchador* a) {
		this->Data = a;
	}
	Node* Node::getNext() {
		return this->Next;
	}
	Luchador* Node::getData() {
		return this->Data;
	}
	void  Node::write(int at, Luchador* Data) {
		if (at == this->ID) {
			setData(Data);
		} else {
			Next->write(at, Data);
		}
	}
	Luchador*  Node::at(int at) {
		if (at == this->ID) {
			return this->Data;
		} else {
			return Next->at(at);
		}
	}
	Node* Node::NodeAt(int at) {
		if (at == this->ID) {
			return this;
		} else {
			return Next->NodeAt(at);
		}
	}
	void Node::setID(int a){
		this->ID = a;
	}
	int Node::getID(){
		return this->ID;
	}
