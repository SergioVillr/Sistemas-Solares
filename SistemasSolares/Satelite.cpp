#include "Satelite.h"

Satelite::Satelite(){
	
}
Satelite::Satelite(int centralx,int centraly,int vuel, int radxorbita, int radyorbita,int radio,int color,int ani,int anf,double pi,string nombre):Cuerpos_Celestes(centralx,centraly,vuel,radxorbita,radyorbita,radio,color,ani,anf,pi,nombre){
	
}
void Satelite::Datos(){
//	centralx=x
	cout << " Ingrese el color del satelite "<<endl;
	cin>>color;
}
void Satelite::CrearSatelite(int x,int y,int col){
	setfillstyle(SOLID_FILL,col);
	fillellipse(x,y,4,4);
}
void Satelite::Pintar_Sat(int angulo){
     int px,py;
     px=(int)floor(83*cos((angulo*3)*pi/180.0));
     py=(int)floor(30*sin((angulo*3)*pi/180.0));
     CrearSatelite(580+px,300-py,14);
}

void Satelite::PintarB_Sat(int angulo){
     int px,py;
     px=(int)floor(83*cos((angulo*3)*pi/180.0));
     py=(int)floor(30*sin((angulo*3)*pi/180.0));
     CrearSatelite(580+px,300-py,0);
}
