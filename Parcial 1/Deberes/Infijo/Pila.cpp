/*#include "Pila.h"
#include <iostream>

using namespace std;

template <typename T>
bool Pila<T>::vacia(){
	return primero==nullptr;
}

template <typename T>
void Pila<T>::push(T v){
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
void Pila<T>::pop(){
	if(vacia()){
		cout<<"Pila vacia, no hay nada que eliminar"<<endl;
	} else{
		Nodo<T> *aux=primero;
		primero = aux->getSiguiente();
		delete aux;
		tamanio --;
	}
}

template <typename T>
T Pila<T>::peek(){
	if(vacia()){
		cout<<"Pila vacia, no hay nada que eliminar"<<endl;
	} else{
		return ultimo->getDato();
	}
}

template <typename T>
void Pila<T>::mostrar(){
	Nodo<T> *temp = primero;
	for(int i=0;i<tamanio;i++){
		cout<<"El dato es: "<<temp->getDato()<<endl;
		temp=temp->getSiguiente();
	}
}*/