#ifndef ESTRELLA_H
#define ESTRELLA_H
#include <math.h>
#include "Cuerpos_Celestes.h"

class Estrella: public Cuerpos_Celestes
{
	private:

	public:
		Estrella();
		Estrella(int,int,int,int,int,int,int,int,int,double,string);
		void DatosSol();
		void Sol();
		void CrearSol(int,int,int);
		void Dibujar();
		void Estrellas();
//		void Asteroides();
	protected:
};

#endif
