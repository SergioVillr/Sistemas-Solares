#ifndef COMETA_H
#define COMETA_H
#include "Cuerpos_Celestes.h"
#include <math.h>
#include<stdio.h>

class Cometa: public Cuerpos_Celestes
{
	public:
		Cometa();
		Cometa(int,int,int,int,int,int,int,int,int,double,string);
		void CrearCometa(int,int,int);
		void Pintar_Come(int);
		void PintarB_Come(int);
	protected:
};

#endif
