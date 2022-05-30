#pragma once
#include <iostream>

class Nodo{
	private:
		int dato;
		Nodo *siguiente=nullptr;
		Nodo *anterior=nullptr;
	public:
		Nodo(int _dato);
		
		void setDato(int);
		int getDato();
		
		void setSiguiente(Nodo *nodo);
		Nodo *getSiguiente();
		
		void setAnterior(Nodo *nodo);
		Nodo *getAnterior();
		
	friend class Lista;
};
