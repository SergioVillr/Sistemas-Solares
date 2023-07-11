#ifndef PLANETA_H
#define PLANETA_H
#include "Cuerpos_Celestes.h"
#include "Satelite.h"

#include <math.h>
#include<stdio.h>
#define TAM 8

class Planeta: public Cuerpos_Celestes
{
	private:
		Satelite satelites[3];
		int numsat;
		int k;
	public:
		Planeta();
		Planeta(int,int,int,int,int,int,int,int,int,double,string);
		void Datos(int);
		void CrearPlaneta(int,int,int,int,int);
		void Pintar_anima(int);
		void PintarB_anima(int);
		Satelite s;
};

#endif
