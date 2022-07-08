#pragma once

template<typename T>
class Nodo{
	private:
		T dato;
		Nodo<T> *izq=nullptr;
		Nodo<T> *der=nullptr;
	public:
		Nodo()=default;
		Nodo(T);
		
		T getDato();
		void setDato(T);
		
		Nodo<T>* getIzq();
		void setIzq(Nodo<T>*);
		
		Nodo<T>* getDer();
		void setDer(Nodo<T>*);
};

template<typename T>
Nodo<T>::Nodo(T _dato){
	this->dato=_dato;
}

template<typename T>
T Nodo<T>::getDato(){
	return dato;
}

template<typename T>
void Nodo<T>::setDato(T _dato){
	this->dato=_dato;
}

template<typename T>
Nodo<T>* Nodo<T>::getIzq(){
	return izq;
}

template<typename T>
void Nodo<T>::setIzq(Nodo<T> *_izq){
	this->izq=_izq;
}

template<typename T>
Nodo<T>* Nodo<T>::getDer(){
	return der;
}

template<typename T>
void Nodo<T>::setDer(Nodo<T> *_der){
	this->der=_der;
}