#pragma once
#include "Nodo.h"
#include <iostream>

using namespace std;

template <typename T>
class ListaDoble{
	private:
		Nodo<T> *primero=nullptr;
		Nodo<T> *ultimo=nullptr;
		int tamanio=0;
	public:
		ListaDoble()=default;
		void insertarFinal(T);
		void insertarInicio(T);
		void mostrar();
		void mostrarFinal();
		bool vacia();
		Nodo<T>* ultNod();
		T getTop();
		void eliminar();
};

template <typename T>
bool ListaDoble<T>::vacia(){
	return primero==nullptr;
}

template <typename T>
Nodo<T>* ListaDoble<T>::ultNod(){
	Nodo<T> *temp = primero;
	while(temp->getSiguiente()!=nullptr){
		temp = temp->getSiguiente();
	}
	return temp;
}

template <typename T>
T ListaDoble<T>::getTop(){
	if(vacia()){
		cout<<"Pila vacia, no hay nada que eliminar"<<endl;
	}
	return ultNod()->getDato();
}

template <typename T>
void ListaDoble<T>::insertarFinal(T v){
	Nodo<T> *nuevo = new Nodo<T>(v);
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

template <typename T>
void ListaDoble<T>::insertarInicio(T v){
	Nodo<T> *nuevo = new Nodo<T>(v);
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

template <typename T>
void ListaDoble<T>::mostrar(){
	Nodo<T> *temp = primero;
	for(int i=0;i<tamanio;i++){
		cout<<"El dato es: "<<temp->getDato()<<endl;
		temp=temp->getSiguiente();
	}
}

template <typename T>
void ListaDoble<T>::mostrarFinal(){
	Nodo<T> *temp = ultNod();
	for(int i=0;i<tamanio;i++){
		cout<<"El dato es: "<<temp->getDato()<<endl;
		temp=temp->getAnterior();
	}
}

template <typename T>
void ListaDoble<T>::eliminar(){
	if(vacia()){
		cout<<"Pila vacia, no hay nada que eliminar"<<endl;
	} else{
		Nodo<T> *aux=primero;
		primero = aux->getSiguiente();
		delete aux;
		tamanio --;
	}
}