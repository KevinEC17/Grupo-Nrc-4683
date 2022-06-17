#pragma once
#include <iostream>

template <typename T>
class Nodo{
	private:
		T dato;
		Nodo<T> *siguiente=nullptr;
		Nodo<T> *anterior=nullptr;
	public:
		Nodo(T _dato);
		
		T getDato();
		void setDato(T _dato);
		
		Nodo<T>* getSiguiente();
		void setSiguiente(Nodo<T>*sig);
		
		Nodo<T>* getAnterior();
		void setAnterior(Nodo<T>*ant);
};

template <typename T>
Nodo<T>::Nodo(T _dato){	
	this->dato=_dato;
}

template <typename T>
T Nodo<T>::getDato(){
	return dato;
}

template <typename T>
void Nodo<T>::setDato(T _dato){
	this->dato=_dato;
}

template <typename T>
Nodo<T>* Nodo<T>::getSiguiente(){
	return siguiente;
}

template <typename T>
void Nodo<T>::setSiguiente(Nodo<T> *sig){
	this->siguiente=sig;
}

template <typename T>
Nodo<T>* Nodo<T>::getAnterior(){
	return anterior;
}

template <typename T>
void Nodo<T>::setAnterior(Nodo<T> *ant){
	this->anterior=ant;
}