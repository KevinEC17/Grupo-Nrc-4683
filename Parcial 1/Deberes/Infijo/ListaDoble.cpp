/*#include "ListaDoble.h"
#include <iostream>

using namespace std;

bool ListaDoble<T>::vacia(){
	return primero==nullptr;
}

Nodo* ListaDoble<T>::ultNod(){
	Nodo *temp = primero;
	while(temp->getSiguiente()!=nullptr){
		temp = temp->getSiguiente();
	}
	return temp;
}

void ListaDoble<T>::insertarFinal(int v){
	Nodo *nuevo = new Nodo(v);
	if(vacia()){
		this->primero = nuevo;
		tamanio++;
		return;
	} else{
		ultimo=ultNod();
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		tamanio++;
	}
}

void ListaDoble::insertarInicio(int v){
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

void ListaDoble::mostrar(){
	Nodo *temp = primero;
	for(int i=0;i<tamanio;i++){
		cout<<"El dato es: "<<temp->getDato()<<endl;
		temp=temp->getSiguiente();
	}
}

void ListaDoble::mostrarFinal(){
	Nodo *temp = ultNod();
	for(int i=0;i<tamanio;i++){
		cout<<"El dato es: "<<temp->getDato()<<endl;
		temp=temp->getAnterior();
	}
}*/