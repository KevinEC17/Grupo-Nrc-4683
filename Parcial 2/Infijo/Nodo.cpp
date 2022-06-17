#include "Nodo.h"

Nodo::Nodo(int _dato){	
	this->dato=_dato;
}

int Nodo::getDato(){
	return dato;
}

void Nodo::setDato(int _dato){
	this->dato=_dato;
}

Nodo* Nodo::getSiguiente(){
	return siguiente;
}

void Nodo::setSiguiente(Nodo* sig){
	this->siguiente=sig;
}

Nodo* Nodo::getAnterior(){
	return anterior;
}

void Nodo::setAnterior(Nodo *ant){
	this->anterior=ant;
}
