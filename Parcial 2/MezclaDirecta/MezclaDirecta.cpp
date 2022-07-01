#include "MezclaDirecta.h"
#include<fstream> //Libreria para los ficheros
#include<iostream>

using namespace std;
 
void MezclaDirecta::abrir(fstream *f, char *nom, int tip){
	if(tip==1){
		(*f).open(nom, ios::in );
	}else{
		if(tip==2){
			(*f).open(nom, ios::out | ios::app);
		}else{
			(*f).open(nom, ios::out);
		}
	}
}

void MezclaDirecta::cerrar(fstream *f){
	(*f).close();
}

void MezclaDirecta::limpiar(){
	fstream F, F1, F2;
	abrir(&F, "datos.txt", 3);
	abrir(&F1, "F1.txt"  , 3);
	abrir(&F2, "F2.txt"  , 3);
	cerrar(&F);
	cerrar(&F1);
	cerrar(&F2);
}

bool MezclaDirecta::hayDatos(char *nom){
	fstream F;
	abrir(&F, nom,1);
	int x=-10001;
	F>>x;
	if(x!=-10001){
		return true;
	}else{
		return false;
	}
	cerrar(&F);
}

void MezclaDirecta::mostrar(char *nom){
	fstream F;
	abrir(&F, nom,1);
	int dato;
	F>>dato;
	while(!F.eof()){
		std::cout<<dato<<" ";
		F>>dato;
	}
	cerrar(&F);
}

void MezclaDirecta::insertar(int d, char *nom){
	fstream F;
	abrir(&F, nom, 2);
	N++;
	F<<d<<" ";
	cerrar(&F);
}

void MezclaDirecta::ordenar(){
	int longitud=1;
	while( longitud < N){
		particiona(longitud);
		fusiona(longitud);
		longitud*=2;
	}
}

void MezclaDirecta::particiona(int longitud){
	fstream F, F1, F2;
	int con1, con2 , dato;
	abrir(&F, "datos.txt",1);
	abrir(&F1, "F1.txt"  ,3);
	abrir(&F2, "F2.txt"  ,3);
	while(!F.eof()){
		con1=0;
		while(con1< longitud && !F.eof()){
 			F>>dato;
			if(!F.eof()){
				F1<<dato<<" ";
			}
			con1++;
		}
		con2=0;
		while(con2< longitud && !F.eof()){
			F>>dato;
			if(!F.eof()){
				F2<<dato<<" ";
			}
			con2++;
		}
 	}
 	cerrar(&F);
 	cerrar(&F1);
 	cerrar(&F2);
}

void MezclaDirecta::fusiona(int longitud){
	fstream F, F1, F2;
	int con1, con2 , dato1, dato2;
	bool ban1, ban2;
	abrir(&F , "datos.txt",3);
	abrir(&F1, "F1.txt"  ,1);
	abrir(&F2, "F2.txt"  ,1);
	ban1=ban2=true;
	if(!F1.eof()){
		F1>>dato1;
		ban1=false;
	}
	if(!F2.eof()){
		F2>>dato2;
		ban2=false;
	}
	while( (!F1.eof() || ban1== false) && (!F2.eof() || ban2== false)){
		con1=con2=0;
		while( (con1< longitud && ban1 ==false) && (con2< longitud && ban2 ==false)){
   			if( dato1 <= dato2){
    			ban1=true;
				con1++;
    			if(!F1.eof()){
    				F<<dato1<<" ";//Cambio
    				F1>>dato1;
    				ban1=false;
    			}
			}else{
			    ban2=true;
    			con2++;
    			if(!F2.eof()){
    				F<<dato2<<" ";//Cambio
    				F2>>dato2;
    				ban2=false;
    			}
   			}
		}
		if( con1 < longitud){
			while( con1 < longitud && ban1==false){
				ban1=true;
    			con1++;
    			if(!F1.eof()){
    				F<<dato1<<" ";//Cambio
    				F1>>dato1;
    					ban1=false;
    			}
			}
		}
		if( con2 < longitud){
			while( con2 < longitud && ban2==false){
    			ban2=true;
    			con2++;
    			if(!F2.eof()){
    				F<<dato2<<" ";//Cambio
   					F2>>dato2;
    				ban2=false;
    			}
			}
		}
	}
	while(!F1.eof()){
		F1>>dato1;
		if(!F1.eof()){
			F<<dato1<<" ";
		}
	}
	while(!F2.eof()){
		F2>>dato2;
		if(!F2.eof()){
			F<<dato2<<" ";
		}
 	}
 	cerrar(&F);
	cerrar(&F1);
	cerrar(&F2);
}