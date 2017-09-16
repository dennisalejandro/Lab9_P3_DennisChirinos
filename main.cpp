#include <iostream>
#include <string>
//
#include "Alquimista.h"
#include "Luchador.h"
#include "Node.h"
#include "Aprendiz.h"
#include "Mago.h"
#include "Guerrero.h"
#include "DragonBorn.h"
#include "LinkList.h"
#include <fstream>
#include <exception>
using namespace std;
int Menu();
int Menu2();
int Menu3();
string MenuLog(int);
void Save(string);
int main() {
	int op = 0;
	int opA = 0;
	int opB = 0;
	int at = 0;
	string Data = "";
	LinkList* list = new LinkList(0);
	while (op != 6) {
		cout << "\n";
		op = Menu();
		try {
			switch(op){
				case 1: {
					opA = Menu2();
					switch(opA) {
						case 1: {
							Alquimista* c = new Alquimista("Ana");
							list->Write(c);
						} break;
						case 2: {
							Aprendiz* c = new Aprendiz("Ana");
							list->Write(c);
						} break;
						case 3: {
							Guerrero* c = new Guerrero("Ana");
							list->Write(c);
						} break;
						case 4: {
							Mago* c = new Mago("Ana");
							list->Write(c);
						} break;
						case 5: {
							DragonBorn* c = new DragonBorn("Ana");
							list->Write(c);
						} break;
					} 
				} break;
				case 2: {
					cout << "---Lista de Peleadores!---\n";
					for (int i = 0;i<list->length();i++) {
						cout << list->at(i)->toString() << "\n"; 
					}
				} break;
				case 3: {
					try {
						int opC;
						cout << "Elija ID de Luchador: ";
						cin >> opC;
						cout << "\n";
						list->remove(opC);
						cout << "Jugador Eliminado Excitosamente\n";
					}catch (exception e){
						cout << "Eligio un Luchador Equivocado \n";
					}

				
				} break;
				case 4: {
					int opP1;
					int opP2;
					int NewClass;
					int opAct;
					string Action;
					cin >> opP1;
					cin >> opP2;
					try {
						cout << "Elija Peleador 1 : " << "\n";
						Luchador P1 = *list->at(opP1);
						cout << "Elija Peleador 2 : " << "\n";
						Luchador P2 = *list->at(opP2);
						cout << "El Peleador 1 es: " << P1.toString() << "\n";
						cout << "El Peleador 2 es: " << P2.toString() << "\n";
						int AtkP1 = 0;
						int AtkP2 = 0;
						while ((P1.getHP()>0)&&(P2.getHP()>0)) {
							opAct = Menu3();
							AtkP1 = P1.Action(opAct, AtkP2);
							P2.setHP(P2.getHP()-AtkP1);
							cout << P1.getNombre()+" "+MenuLog(opAct);
							Data += (P1.getNombre()+" "+MenuLog(opAct));
							cout << "El jugador 2 tiene: " << P2.getHP() << " de Vida!\n";
							opAct = Menu3();
							AtkP2 = P2.Action(opAct, AtkP1);
							P1.setHP(P1.getHP()-AtkP2);
							cout << P2.getNombre()+" "+MenuLog(opAct);
							Data += (P2.getNombre()+" "+MenuLog(opAct));
							cout << "El jugador 1 tiene: " << P1.getHP() << " de Vida!\n";
						}
						Save(Data);
						if (P2.getHP()>0) {
							list->at(opP1)->setExp(list->at(opP1)->getGain()+list->at(opP1)->getExp());
							cout << "El jugador 1 tiene: " << list->at(opP1)->getExp() << " de Exp \n";
							if ((list->at(opP1)->getExp()) >= (list->at(opP1)->getReq())) {
								cout << "Su Luchador puede DigiEvolucionar a otra! Cual? \n";
								NewClass = Menu2();
								switch(opA) {
									case 1: {
										Alquimista* c = new Alquimista("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
									case 2: {
										Aprendiz* c = new Aprendiz("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
									case 3: {
										Guerrero* c = new Guerrero("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
									case 4: {
										Mago* c = new Mago("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
									case 5: {
										DragonBorn* c = new DragonBorn("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
								} 
							}
						}
						if (P1.getHP()>0) {
							list->at(opP1)->setExp(list->at(opP1)->getGain()+list->at(opP1)->getExp());
							cout << "El jugador 1 tiene: " << list->at(opP1)->getExp() << " de Exp \n";
							if ((list->at(opP1)->getExp()) >= (list->at(opP1)->getReq())) {
								cout << "Su Luchador puede DigiEvolucionar a otra! Cual? \n";
								NewClass = Menu2();
								switch(opA) {
									case 1: {
										Alquimista* c = new Alquimista("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
									case 2: {
										Aprendiz* c = new Aprendiz("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
									case 3: {
										Guerrero* c = new Guerrero("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
									case 4: {
										Mago* c = new Mago("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
									case 5: {
										DragonBorn* c = new DragonBorn("Ana");
										c->setClases(P1.getClases()+1);
										list->NodeAt(opP1)->setData(c);
									} break;
								} 
							}
						}
					} catch (exception e) {
						cout << "No existian los peleadores seleccionados \n";
					}
				} break;		
			} 
		} catch (exception e) {

		}
	}
	delete list;
	return 0;
}
int Menu() {
	int op;
	cout << "1) Crear Luchador" << "\n";
	cout << "2) Listar Luchadores" << "\n";
	cout << "3) Eliminar Jugadores" << "\n";
	cout << "4) Simulacion" << "\n";
	cout << "6) Salir" << "\n \n";
	cin >> op;
	return op;
}int Menu2() {
	int op;
	cout << "--De que tipo?--" << "\n";
	cout << "1) Alquimista" << "\n";
	cout << "2) Aprendiz" << "\n";
	cout << "3) Guerrero" << "\n";
	cout << "4) Mago" << "\n";
	cout << "5) DragonBorn (FUS RO DAH!!!)" << "\n \n";
	cin >> op;
	return op;
}
int Menu3() {
	int op;
	cout << "--Elija Ataque--" << "\n";
	cout << "1) Ataque Magico" << "\n";
	cout << "2) Ataque Fisico" << "\n";
	cout << "3) Defender" << "\n";
	cout << "4) Habilidad" << "\n";
	cout << "\n";
	cin >> op;
	return op;
}
string MenuLog(int op) {
	string Act = "";
	switch (op) {
		case 1: {
			Act = " Hizo un Ataque Magico! \n";
		} break;
		case 2: {
			Act = " Hizo un Ataque Fisico! \n";
		} break;
		case 3: {
			Act = " Defendio!\n";
		} break;
		case 4: {
			Act = " Hizo una Habilidad!\n";
		} break;
	}
	return Act;
}
void Save(string a) {
		ofstream Archivo;
		Archivo.open("SaveData.txt");
		Archivo << a.c_str() << endl;
		Archivo.close();
	}
