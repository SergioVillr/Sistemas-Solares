#include "Cometa.h"

Cometa::Cometa()
{
}
Cometa::Cometa(int centralx,int centraly,int vuel, int radxorbita, int radyorbita,int radio,int color,int ani,int anf,double pi,string nombre):Cuerpos_Celestes(centralx,centraly,vuel,radxorbita,radyorbita,radio,color,ani,anf,pi,nombre){
	
}
void Cometa::CrearCometa(int x,int y,int col){
	setfillstyle(SOLID_FILL,col);
	fillellipse(x,y,5,5);
}

// Metos para animar Pintar_Color ----Pintar_Black
void Cometa::Pintar_Come(int angulo){
     int px,py;
     px=(int)floor(400*cos((angulo*7)*pi/180.0));
     py=(int)floor(400*sin((angulo*7)*pi/180.0));
     CrearCometa(300+px,80-py,14);
}

void Cometa::PintarB_Come(int angulo){
     int px,py;
     px=(int)floor(400*cos((angulo*7)*pi/180.0));
     py=(int)floor(400*sin((angulo*7)*pi/180.0));
     CrearCometa(300+px,80-py,0);
}
