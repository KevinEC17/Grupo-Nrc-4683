#pragma once
#include <iostream>


class Nodo{
	private:
		int dato;
		Nodo *siguiente=nullptr;
		Nodo *anterior=nullptr;
		
		friend class Pila;
	public:
		Nodo(int);
		
		int getDato();
		void setDato(int);
		
		Nodo* getSiguiente();
		void setSiguiente(Nodo*);
		
		Nodo* getAnterior();
		void setAnterior(Nodo*);
};
