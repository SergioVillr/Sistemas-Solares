// Programa elaborado por Sergio D. Villanueva Rios.
// Ingeniería en Sistemas - Universidad Nacional de Costa Rica
// Curso: Programación I  Ciclo II 2019  ASIGNACION: PROYECTO #1 
// Nombre del Proyecto: Sistemas Solares
// Profesor del curso: M.C. Grabriel Núñez M.

#include <iostream>
#include "Cuerpos_Celestes.h"
#include "Estrella.h"
#include "Planeta.h"
#include "Sistema_Solar.h"
#include <math.h>
using namespace std;

#define PLANET 6



int main(){
	Sistema_Solar nuevoSist[5];//Vector de objetos de la clase Sistema_Solar
	 
	int opc,cont=0;
	int k=1;
	
	while(k==1){
		cout << "\n\t--- DIJITE EL NUMERO CORRESPONDIENTE PARA LA ACCION QUE DESEA ---" << endl;
		cout<<"\n\t        ----- 1 = CREAR NUEVO SISTEMA SOLAR -------"<<endl;
		cout<<"\n\t    ----- 2 = VER DATOS DE SISTEMAS EXISTENTES -----"<<endl;
		cout<<"\n\t       ----- 3 = EDITAR UN SISTEMA EXISTENTE ----"<<endl;
		
		cin>>opc;
		system("cls");
		
		switch(opc){
			
			case 1:{
				nuevoSist[cont].crearSistema();
				nuevoSist[cont].setCont(1);
				cont++;
			
				break;
			}
			case 2:{
				int posvec;
				int sistema;//informacion de planetas ---- variable indicadora de la pos del vec de sistemas 
				char z,inf;// variable para graficar
				for(int j=0;j<5;j++){
					nuevoSist[j].mostrarSistema(j);	
				}
				if (cont==0){
					cout << "\n  No hay universos creados aun ";
					break;
				}
				cout << "\n  Si desea  ver los datos de los sistemas creados digite 1 u otra tecla para continuar "<<endl;
				cin>>inf;
				if(inf=='1'){
					cout << "Digite el numero del sistema que desea revisar datos: "<<endl;
					cin>>sistema;
					switch(sistema){
						case 1:
							nuevoSist[0].informacion(0);
							break;
						case 2:
							nuevoSist[1].informacion(1);
							break;
						case 3:
							nuevoSist[2].informacion(2);
							break;
						case 4:
							nuevoSist[3].informacion(3);
							break;
						case 5:
							nuevoSist[4].informacion(4);
							break;
					}
				}
				cout << "\n Para graficar un sistema dijite 1  o cualquier otra tecla para continuar"<<endl;
				cin>>z;
				if(z!='1'){
					break;
				}
				else {
					cout<<"\n Seleccione el sistema que desea graficar"<<endl;
					cin>>posvec;
					if(posvec > 5){
						cout << "Opcion invalida digite un numero entre 0 y 5 "<<endl;
						cin>>posvec;
					}
					if(posvec==1){
						initwindow(1000,600);
						nuevoSist[0].animar();
					}
					if(posvec==2){
						if (nuevoSist[1].getCont()==0){
							cout << " En este sector no se a creado ningun sistema "<<endl;
							break;
						}
						initwindow(1000,600);
						nuevoSist[1].animar();
					}
					if(posvec==3){
						initwindow(1000,600);
						nuevoSist[2].animar();
					}
					if(posvec==4){
						initwindow(1000,600);
						nuevoSist[3].animar();
					}
					if(posvec==5){
						initwindow(1000,600);
						nuevoSist[4].animar();
					}
				}

				break;
			}	
			case 3:{
				int sisedit;
				if (cont==0){
					cout << "\n  No hay universos creados aun ";
					break;
				}
				for(int j=0;j<5;j++){
					nuevoSist[j].mostrarSistema(j);	
				}
				
				cout << "\n\n Que numero de sistema desea editar: ";cin>>sisedit;
				if(sisedit==1){
					nuevoSist[0].editar();
				}
				if(sisedit==2){
					nuevoSist[1].editar();
				}
				if(sisedit==3){
					nuevoSist[2].editar();
				}
				if(sisedit==4){
					nuevoSist[3].editar();
				}
				if(sisedit==5){
					nuevoSist[4].editar();
				}

				break;
			} 		
	}
		cout <<"\n\n Tarea realizada con exito, desea regresar al menu "<<endl;
		cout << "   1=SI   -------   2=N0 "<<endl;
		cin>>k;
		system("cls");
}
	

	return 0;
}
