#pragma once
#include "Nodo.h"


class ListaDoble{
	private:
		Nodo *primero=nullptr;
		Nodo *ultimo=nullptr;
		bool vacia();
		Nodo* ultNod();
		int tamanio=0;
	public:
		ListaDoble()=default;
		void insertarFinal(int);
		void insertarInicio(int);
		void mostrar();
		void mostrarFinal();
};