#pragma once
#include "Nodo.h"
#include "ListaDoble.h"
#include <stdexcept>
#include <exception>
#include <iostream>

using namespace std;

template <typename T>
class Pila{
	private:
		ListaDoble<T> lst;
	public:
		Pila()=default;
		bool vacia();
		void push(T v);
		void pop();
		T peek();
};

template <typename T>
bool Pila<T>::vacia(){
	return lst.vacia();
}

template <typename T>
void Pila<T>::push(T v){
	lst.insertarInicio(v);
}

template <typename T>
void Pila<T>::pop(){
	lst.eliminar();
}

template <typename T>
T Pila<T>::peek(){
	return lst.getTop();
}