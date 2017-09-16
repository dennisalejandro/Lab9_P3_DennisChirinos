#include "LinkList.h"
#include <iostream>
#include <string>
#include "Node.h"
#include "Luchador.h"
using namespace std;
	LinkList::LinkList(int Size) {
		this->Size = Size;
		this->Root = new Node(0, Size);	
	}
	void LinkList::Write(int at, Luchador* Data) {
		if(at == 0) {
			this->Root->setData(Data);
		} else {
			this->Root->write(at, Data);
		}
	}
	void LinkList::Write(Luchador* Data) {
		if (this->Size == 0) {
			this->Root->setData(Data);
			this->Root->Next = new Node(1,1);
		} else {
			this->Root->NodeAt(this->Size)->Next = new Node((this->Size)+1, this->Size+1);
			cout << "Node Created \n";
			this->Root->NodeAt(this->Size)->setData(Data);
		}
		this->Size++;
		this->VisibleSize++;
	}
	Luchador* LinkList::at(int at) {
		if(at == 0) {
			return this->Root->getData();
		} else {
			return this->Root->getNext()->at(at);
		}
	}
	Node* LinkList::NodeAt(int at) {
		if(at == 0) {
			return this->Root;
		} else {
			return this->Root->getNext()->NodeAt(at);
		}
	}
	int LinkList::length() {
		return this->VisibleSize;
	}
	LinkList::~LinkList() {
		delete this->Root;
	}
	void LinkList::remove(int a) {
		Root->NodeAt(a)->setID(-1);
		this->VisibleSize--;
		for (int i = a+1;i<length();i++) {
			Root->NodeAt(i)->setID(i-1);
		}
		cout << this->Size << ":Size \n";
	}
