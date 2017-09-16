#include "Node.h"
#include <iostream>
#include <string>
using namespace std;
	Node::Node(Node* Next, Luchador* Data) { 
		setNext(Next);
		setData(Data);
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
