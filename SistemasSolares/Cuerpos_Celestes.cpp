#include "Cuerpos_Celestes.h"

Cuerpos_Celestes::Cuerpos_Celestes(){
	centralx=580;
	centraly=300;
	vuel=5;
	radxorbita=83;
	radyorbita=30;
	radio=0;
	color=0;	
	ani=0;
	anf=360;
	pi=3.1416;
	nombre=" ";
}

Cuerpos_Celestes::Cuerpos_Celestes(int centralx,int centraly,int vuel, int radxorbita, int radyorbita,int radio,int color,int ani,int anf,double pi,string nombre){
	this->centralx=centralx;
	this->centraly=centraly;
	this->vuel=vuel;
	this->radxorbita=radxorbita;
	this->radyorbita=radyorbita;
	this->radio=radio;
	this->color=color;	
	this->ani=ani;
	this->anf=anf;
	this->pi=pi;
	this->nombre=nombre;
}
void Cuerpos_Celestes::setNombre(string nomb){
	nombre=nomb;
}
string Cuerpos_Celestes::getNombre(){
	return nombre;
}
void Cuerpos_Celestes::setX(int cnx){
	centralx=cnx;
}
int Cuerpos_Celestes::getX(){
	return centralx; 
}
void Cuerpos_Celestes::setY(int cny){
	centraly=cny;
}
int Cuerpos_Celestes::getY(){
	return centraly;
}

void Cuerpos_Celestes::setColor(int col){
	color=col;
}
int Cuerpos_Celestes::getColor(){
	return color;
}

void Cuerpos_Celestes::setRadio(int rad){
	radio=rad;
}
int Cuerpos_Celestes::getRadio(){
	return radio;
}
