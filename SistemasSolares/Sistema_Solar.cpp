#include "Sistema_Solar.h"
#include <math.h>

Sistema_Solar::Sistema_Solar()
{
	numplanet=0;
	cont = 0;
}

void Sistema_Solar::setCont(int cn){
	cont=cn;
}
int Sistema_Solar::getCont(){
	return cont;
}
// Metodo que llena datos necesarios de los cuerpos celestes para crear el sistema solar
void Sistema_Solar::crearSistema(){
	p.Sol();
	cout << "\n En el sistema se puede crear un maximo de 5 planetas ";
	cout << "\n Cuantos planetas desea agregarle al sistema: ";cin>>numplanet;
	if(numplanet>5){
		cout << "\n El numero dijitado excede la cantidad permitida de planetas ";
		cout << "\n Vuelva a ingresar la cantidad de planetas que desea crear ";cin>>numplanet;
	}
	for(int i=0;i<numplanet;i++){
		planetas[i].Datos(i);
	}	
}

// Metodo llamado desde el main para mostrar la cantidad de sistemas creados
void Sistema_Solar::mostrarSistema(int cont){	
	if(getCont() ==1){
		cout << "\n  El sistema "<<cont+1<<" ha sido creado con exito "<<endl;
	}
	else{
		cout << "\n  El sector "<<cont+1<<" de nuestro universo se encuentra vacio "<<endl;	
	}
}

// Metodo llemado desde el main para mostrar los datos de cada cuerpo celeste pertenecientes a un sistema existente
void Sistema_Solar::informacion(int c){
	cout << "\n Informacion del sitema Planetario "<<endl;
	cout << " Nombre de la estrella: "<<p.getNombre()<<endl;
	cout << " Numero de color: "<<p.getColor()<<endl;
	for(int i=0;i<numplanet;i++){
		cout << "\n Planeta: "<<i+1<<" "<<endl;
		cout << " Nombre: "<<planetas[i].getNombre()<<endl;;
		cout << " Color: "<<planetas[i].getColor()<<endl;
		cout << " Radio: "<<planetas[i].getRadio()<<endl;
	}
}

// Animacion
void Sistema_Solar::animar(){
    int angulo=0,w=2;
    p.Estrellas();
    p.Dibujar();
   		for(int i=0;i<180;i++){
   			q.Pintar_Come(angulo);
//   			l.Pintar_Sat(angulo);
   			planetas[0].Pintar_anima(angulo);
   			planetas[1].Pintar_anima(angulo);
   			planetas[2].Pintar_anima(angulo);
   			planetas[3].Pintar_anima(angulo);
   			planetas[4].Pintar_anima(angulo);
    		delay(50); 
    		q.PintarB_Come(angulo);
//    		l.PintarB_Sat(angulo);
			planetas[0].PintarB_anima(angulo);
			planetas[1].PintarB_anima(angulo);
			planetas[2].PintarB_anima(angulo);
			planetas[3].PintarB_anima(angulo);
			planetas[4].PintarB_anima(angulo);
			
      		if(angulo==360){
        	 angulo=0;
      		}
      		angulo++;      
    	}
    	 closegraph();
}
void Sistema_Solar::editar(){
	int op;
	int k=0;
	cout << "\n\n Elija el cuerpo celeste que desea editar "<<endl;
	cout << "     1=Sol       2=Planetas  ";cin>>op;
	switch(op){
		case 1:
			p.Sol();
			break;
		case 2:
			int i=0;
			int r=0,c=0;
			int k=0;
			cout << "\t El orden palnetario inicia desde el mas cercano al sol al mas lejano "<<endl;
			cout << "\t El sistema cuenta con "<<numplanet<<" planetas creados"<<endl;
			cout << "\t Ingrese el numero del planeta que de sea editar: ";cin>>i;
			cout << "\t Que desea modificarle al planeta 1=Radio 2=Color 3=ambos ";cin>>k;
			switch(k){
				case 1:
					cout << "\n  El radio actual del planeta es: "<<planetas[i-1].getRadio();
					cout << "\n  Ingrese el nuevo radio planetario";cin>>r;
					planetas[i-1].setRadio(r);
					break;
				case 2:
					cout << "\n";
					cout << "\n\t  TABLA DE COLORES   "<<endl;
					cout << "\t  COLOR                         COLOR     "<<endl;
					cout << "\t  1=AZUL                       7=LightGray     "<<endl;
					cout << "\t  2=Verde                      8=DarkGray     "<<endl;
					cout << "\t  3=Cyan                       9=LightBlue     "<<endl;
					cout << "\t  4=Red                        10=LightGreen     "<<endl;
					cout << "\t  5=Magenta                    11=LightCyan     "<<endl;
					cout << "\t  6=Brown                      12=LightRed     "<<endl;
					cout << "\t  13=LightMagenta  14=Yellow   15=White     "<<endl;
					cout << "\n  El color actual del planeta es: "<<planetas[i-1].getColor();
					cout << "\n  Ingrese el nuevo color del planeta";cin>>c;
					planetas[i-1].setColor(c);
					break;
				case 3:
					cout << "\n";
					cout << "\n\t  TABLA DE COLORES   "<<endl;
					cout << "\t  COLOR                         COLOR     "<<endl;
					cout << "\t  1=AZUL                       7=LightGray     "<<endl;
					cout << "\t  2=Verde                      8=DarkGray     "<<endl;
					cout << "\t  3=Cyan                       9=LightBlue     "<<endl;
					cout << "\t  4=Red                        10=LightGreen     "<<endl;
					cout << "\t  5=Magenta                    11=LightCyan     "<<endl;
					cout << "\t  6=Brown                      12=LightRed     "<<endl;
					cout << "\t  13=LightMagenta  14=Yellow   15=White     "<<endl;
					cout << "\n  El radio actual del planeta es: "<<planetas[i-1].getRadio();
					cout << "\n  El color actual del planeta es: "<<planetas[i-1].getColor();
					cout << "\n  Ingrese el nuevo radio planetario";cin>>r;
					cout << "\n  Ingrese el nuevo color del planeta";cin>>c;
					planetas[i-1].setRadio(r);
					planetas[i-1].setColor(c);
					break;
			}
			break;	
	}
	system("cls");
}

