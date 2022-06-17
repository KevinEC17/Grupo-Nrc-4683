#include "Pila.h"
#include <iostream>

using namespace std;

bool Pila::vacia(){
	return primero==nullptr;
}

void Pila::push(int v){
	Nodo *nuevo = new Nodo(v);
	if(vacia()){
		this->primero = nuevo;
		tamanio++;
		return;
	} else{
		primero->setAnterior(nuevo);
		nuevo->setSiguiente(primero);
		primero=nuevo;
		tamanio++;
	}
}

void Pila::pop(){
	if(vacia()){
		cout<<"Pila vacia, no hay nada que eliminar"<<endl;
	} else{
		Nodo *aux=primero;
		primero = aux->getSiguiente();
		delete aux;
		tamanio --;
	}
}

void Pila::mostrar(){
	Nodo *temp = primero;
	for(int i=0;i<tamanio;i++){
		cout<<"El dato es: "<<temp->getDato()<<endl;
		temp=temp->getSiguiente();
	}
}