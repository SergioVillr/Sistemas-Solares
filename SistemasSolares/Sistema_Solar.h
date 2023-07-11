#ifndef SISTEMA_SOLAR_H
#define SISTEMA_SOLAR_H
#include <iostream>
#include <math.h>
#include "Cuerpos_Celestes.h"
#include "Estrella.h"
#include "Planeta.h"
#include "Cometa.h"
#include "Satelite.h"
#define PLA 6

class Sistema_Solar: public Cuerpos_Celestes
{
	private:
		Planeta planetas[5];//Arreglo para almacenar planetas
		bool cont;//Variable para poder mostrar la existencia de sistemas solares
		int numplanet;//Variable para contar la cantidad de planetas
	public:
		Sistema_Solar();
		void crearSistema();
		void mostrarSistema(int);
		void setCont(int);
		int getCont();
		void informacion(int);
		void animar();
		void editar();
		Estrella p;
		Planeta s;
		Cometa q;
		Satelite l;
	protected:
};

#endif
