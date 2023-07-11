#ifndef CUERPOS_CELESTES_H
#define CUERPOS_CELESTES_H
#include <iostream>
#include <graphics.h>
using namespace std;

class Cuerpos_Celestes
{
		protected:
		//Variables que determinan el centro de la consola gráfica
		int centralx;
		int centraly;
		//Atributos para las orbitas
		int vuel;
		int radxorbita;
		int radyorbita;
		//Atributos que se utilizaran en las demas clases
		int radio;
		int color;
		int ani;
		int anf;
		double pi;
		string nombre;
		int satelit;
		
	public:
		Cuerpos_Celestes();
		Cuerpos_Celestes(int,int,int,int,int,int,int,int,int,double,string);
		void setNombre(string);
		void setX(int);
		void setY(int);
		void setColor(int);
		void setRadio(int);
		string getNombre();
		int getX();
		int getY();
		int getColor();
		int getRadio();

};

#endif
