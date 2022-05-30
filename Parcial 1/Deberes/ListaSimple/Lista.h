#include "Nodo.h"

using namespace std;

class Lista{
	private:
		int tamanio=0;
		Nodo *cabeza=nullptr;
		Nodo *actual=nullptr;
		bool listaVacia();
		Nodo *obtenerNodo(int);
		Nodo *ultimoNodo();
	public:
		Lista()=default;
		void insertarCola(int);
		void mostrar();
		void buscar(int);
		void eliminar(int);
};
