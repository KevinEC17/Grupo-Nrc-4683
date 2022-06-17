#pragma once
#include "Nodo.h"


class Pila{
	private:
		Nodo *primero=nullptr;
		Nodo *ultimo=nullptr;
		bool vacia();
		int tamanio=0;
	public:
		Pila()=default;
		void push(int);
		void pop();
		void mostrar();
};