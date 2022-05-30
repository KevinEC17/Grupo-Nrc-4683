#include "Lista.h"
#include <iostream>
#include <stdexcept>
#include <exception>

bool Lista::listaVacia(){
	return(this->cabeza==NULL);
}

void Lista::insertarCola(int val){
	Nodo *nuevo=new Nodo(val);
	tamanio++;
	if(listaVacia()){
		this->cabeza=nuevo;
	}
	else{
		this->actual->siguiente=nuevo;
	}
	this->actual=nuevo;
}

void Lista::mostrar(){
	Nodo *temp=this->cabeza;
	while(temp){
		cout<<temp->dato<<"-->";
		temp=temp->siguiente;
	}
	cout<<"Null\n";
}

void Lista::buscar(int _dato){
	Nodo *temp=this->cabeza;
	for(int i=0;i<tamanio;i++){
		if((temp->dato)==_dato){
			cout<<"El dato buscado ha sido encontrado en la posicion ="<<i+1<<endl;
		}
		temp=temp->siguiente;
	}
}

void Lista::eliminar(int val) {
	Nodo* tmp = this->cabeza;
	while (tmp) {
		if (tmp->dato == val) {
			if (tmp->siguiente == nullptr)
			{
				tmp->dato = NULL;
			}
			else {
				tmp->dato = tmp->siguiente->dato;
				tmp->siguiente = tmp->siguiente->siguiente;
			}
		}
		tmp = tmp->siguiente;
	}
}
/*
void Lista::eliminar(int _dato){
	if (_dato < 0 || _dato >= tamanio) {
        throw std::invalid_argument("index out of bounds");
    }
    
    if (_dato == 0) {
        Nodo *temporal = cabeza;
        cabeza = cabeza->getSiguiente();
        cabeza->setAnterior(nullptr);
        delete temporal;
    } else if (_dato == tamanio - 1) {
        Nodo *nodo = ultimoNodo();
        Nodo *anterior = nodo->getAnterior();
        
        anterior->setSiguiente(nullptr);
        delete nodo;
    } else {
        Nodo *ac = obtenerNodo(_dato);
        Nodo *ant = actual->getAnterior();
        Nodo *sig = actual->getSiguiente();
        
        ant->setSiguiente(sig);
        sig->setAnterior(ant);
        delete actual;
    }
    tamanio--;
}*/