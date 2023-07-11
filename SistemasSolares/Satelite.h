#ifndef SATELITE_H
#define SATELITE_H
#include "Cuerpos_Celestes.h"

#include <math.h>

class Satelite: public Cuerpos_Celestes
{
	private:
		int colorsat;
	public:
		Satelite();
		Satelite(int,int,int,int,int,int,int,int,int,double,string);
		void Datos();
		void CrearSatelite(int,int,int);
		void Pintar_Sat(int);
		void PintarB_Sat(int);
	protected:
};

#endif
