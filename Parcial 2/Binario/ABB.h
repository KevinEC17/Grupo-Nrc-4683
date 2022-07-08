#pragma once

template<typename T>
class ABB{
	private:
		Pila<T> aux;
	public:
		ABB()=default;
		void insertar(T);
		void mostrar();
};

template<typename T>
void ABB<T>::insertar(T _dato){
	aux.push(_dato);
}

template<typename T>
void ABB<T>::mostrar(){
	aux.mostrar(0);
}