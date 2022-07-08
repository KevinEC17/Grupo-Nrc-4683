#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;

template<typename T>
class Pila{
	private:
		Nodo<T> *primero=nullptr;
		Nodo<T> *ultimo=nullptr;
		bool vacia();
		int tamanio=0;
	public:
		Pila()=default;
		void push(T);
		void pop();
		void mostrar(int);
};

template<typename T>
bool Pila<T>::vacia(){
	return primero==nullptr;
}

template<typename T>
void Pila<T>::push(T _dato){
	Nodo<T> *nuevo = new Nodo<T>(_dato);
	if(vacia()){
		this->primero = nuevo;
		tamanio++;
		return;
	} else{
		primero->setIzq(nuevo);
		nuevo->setDer(primero);
		primero=nuevo;
		tamanio++;
	}
}

template<typename T>
void Pila<T>::mostrar(int n){
	/*Nodo<T> *temp = primero;
	for(int i=0;i<tamanio;i++){
		cout<<"El dato es: "<<temp->getDato()<<endl;
		temp=temp->getDer();
	}
	if(vacia())
		return;
	mostrar(n+1);
	for(int i=0; i<n; i++)
    	cout<<"   ";
    cout<< temp->getDato() <<endl;
    mostrar(n+1);*/
}