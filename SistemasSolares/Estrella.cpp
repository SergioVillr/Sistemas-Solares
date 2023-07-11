#include "Estrella.h"

Estrella::Estrella(){

}

Estrella::Estrella(int centralx,int centraly,int vuel, int radxorbita, int radyorbita,int radio,int color,int ani,int anf,double pi,string nombre):Cuerpos_Celestes(centralx,centraly,vuel,radxorbita,radyorbita,radio,color,ani,anf,pi,nombre){

}

void Estrella::Sol(){//Llenado de datos para la estrella principal
	cout << "\n\t  GUIA PARA ELEGIR CARACTERISTICAS DE LA ESTRELLA "<<endl;
	cout << "\t  COLOR                         TEMPERATURA      "<<endl;
	cout << "\t  1=AZUL                       40000 - 25000     "<<endl;
	cout << "\t  2=CELESTE                    25000 - 11000     "<<endl;
	cout << "\t  15=BLANCO                    11000 - 75000     "<<endl;
	cout << "\t  14=AMARILLO                   6000 - 5000     "<<endl;
	cout << "\t  12=NARANJA                    5000 - 3500     "<<endl;
	cout << "\t  4=ROJO                        3500 - 3000     "<<endl;
	cout << "  Seleccione un color digitando uno de los numeros del cuadro: ";cin>>color;
	cout << "\n  Ingrese el nombre de la estrella: "<<endl;
	cin>>nombre;
	centralx=500;
	centraly=300;
	system("CLS");
}

void Estrella::CrearSol(int x,int y,int col){
	setfillstyle(SOLID_FILL,col);
	fillellipse(x,y,20,20);
	//setcolor(0);
}

void Estrella::Dibujar(){//Invoca el metodo para dibujar la estrella
	CrearSol(centralx,centraly,color);
}
void Estrella::Estrellas(){//Llena la pantalla con estrellas aleatoriamente
	for(int i=0;i<500;i++){
		putpixel((rand()%1000+1),(rand()%600+1),15);
	}
}
//Crea cinturon por defecto en los sistemas solar





