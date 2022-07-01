#pragma once
#include<fstream> //Libreria para los ficheros
using namespace std;

class MezclaDirecta{
	private:
		int N;
		
		
		void abrir(fstream *f, char *nom, int tip=1);
		void cerrar(fstream *f);


		void particiona(int longitud);
		void fusiona(int longitud);
	public:
		MezclaDirecta(){N=0;}


		void limpiar();
		bool hayDatos(char *nom);
		void mostrar(char *nom);
		void insertar(int d, char *nom);


		void ordenar();
};