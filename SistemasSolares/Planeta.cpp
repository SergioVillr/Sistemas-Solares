#include "Planeta.h"
#include <math.h>
Planeta::Planeta(){
	
}

Planeta::Planeta(int centralx,int centraly,int vuel, int radxorbita, int radyorbita,int radio,int color,int ani,int anf,double pi,string nombre): Cuerpos_Celestes(centralx,centraly,vuel,radxorbita,radyorbita,radio,color,ani,anf,pi,nombre){
	
}

void Planeta::Datos(int i){//Llenar datos de planetas
	int cont=0;
//	int satelit;
	cout << "\n\t  TABLA DE COLORES   "<<endl;
	cout << "\t  COLOR                         COLOR     "<<endl;
	cout << "\t  1=AZUL                       7=LightGray     "<<endl;
	cout << "\t  2=Verde                      8=DarkGray     "<<endl;
	cout << "\t  3=Cyan                       9=LightBlue     "<<endl;
	cout << "\t  4=Red                        10=LightGreen     "<<endl;
	cout << "\t  5=Magenta                    11=LightCyan     "<<endl;
	cout << "\t  6=Brown                      12=LightRed     "<<endl;
	cout << "\t  13=LightMagenta  14=Yellow   15=White     "<<endl;
	
	cout << "\nPlaneta N:"<<i+1<<endl;
	cout << "\n Ingrese el nombre del planeta: "; cin >> nombre;
	cout << "\n Ingrese el color del planeta: "; cin >> color;
	cout << "\n Dijite un numero del 1 al 13 para asignar el tamaño del planeta: "; cin >> radio;
	if(radio>13){
		cout << "\n El numero dijitado excede el tamaño permitido "<<endl;
		cout << " Ingrese otro numero dentro del rango para asignar el tamaño del planeta ";cin>>radio;
	}
	cout << "\n Desea agregar satelites al planeta? 1=SI 1=NO ";cin>>satelit;
	if (satelit==1){
		cout << " Puede agregar un maximo de 3 satelites, cuantos desea agregar? ";cin>>numsat;
		for( k=0;k<numsat;k++){
			satelites[k].Datos();
		}
	}
	
	for( int j=0; j < i; j++){
		vuel+=1;
		centralx+=50;
		radxorbita+=50;
		radyorbita+=20;
	}	
	system("cls");
}

void Planeta::CrearPlaneta(int xx,int yy,int color,int sate,int s){
	setfillstyle(SOLID_FILL,color);
	fillellipse(xx,yy,radio,radio);
	if (sate==1){
//		satelites[k].CrearSatelite();
		setfillstyle(SOLID_FILL,s);
		fillellipse((xx+radio)+4,yy-15,4,4);
		setcolor(0);
	}
	setcolor(0);
}

//Metodos para realizar la animacion Pintar_Color  Pintar_Black 
void Planeta::Pintar_anima(int angulo){
     int px,py;
     px=(int)floor(radxorbita*cos((angulo*vuel)*pi/180.0)); //x=a cos t  donde t en radianes
     py=(int)floor(radyorbita*sin((angulo*vuel)*pi/180.0)); //y=b sen t  donde t en radianes
     CrearPlaneta(500+px,300-py,color,satelit,satelites[k].getColor()); //dibuja un planeta
}

void Planeta::PintarB_anima(int angulo){
     int px,py;
     px=(int)floor(radxorbita*cos((angulo*vuel)*pi/180.0)); //x=a cos t  donde t en radianes
     py=(int)floor(radyorbita*sin((angulo*vuel)*pi/180.0)); //y=b sen t  donde t en radianes
     CrearPlaneta(500+px,300-py,0,satelit,0); //dibuja un planeta en color negro
}


