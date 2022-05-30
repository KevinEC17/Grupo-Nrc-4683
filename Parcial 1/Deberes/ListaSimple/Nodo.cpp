#include "Nodo.h"
#include <iostream>

Nodo::Nodo(int _dato){
	this->dato=_dato;
}

void Nodo::setDato(int _dato){
	this->dato=_dato;
}

int Nodo::getDato(){
	return dato;
}

void Nodo::setSiguiente(Nodo *nodo){
	this->siguiente=nodo;
}

Nodo* Nodo::getSiguiente(){
	return siguiente;
}

void Nodo::setAnterior(Nodo *nodo){
	this->anterior=nodo;
}

Nodo* Nodo::getAnterior(){
	return anterior;
}