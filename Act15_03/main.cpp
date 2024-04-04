#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system ("color f9");
	string nom[10];
	string centro[10];
	string grado[10];
	string grupo[10];
	int alum[10];
	int c=0;
	int nomp=0;
	int centrop=0;
	int gradop=0;
	int grupop=0;
	float calif[50];
	int alumc=0;
	float prom;
	float re;
	
	//Datos de los alumnos
	
	for(int x=0; x<=9; x++){
		cout << "Ingrese su nombre: "; cin >> nom[nomp];
		cout << "Ingrese su centro academico: "; cin >> centro[centrop];
		cout << "Ingrese su grado: "; cin >> grado[gradop];
		cout << "Ingrese su grupo: "; cin >> grupo[grupop];
		alum[nomp];
		nomp=nomp+1;
		centrop=centrop+1;
		gradop=gradop+1;
		grupop=grupop+1;
		system("cls");
	}
	
	//Calificaciones 
	
	while (c<=49) {
		cout << "Ingrese la primera calificacion: "; cin >> calif[c];
		c=c+1;
		cout << "Ingrese la segunda calificacion: "; cin >> calif[c]; 
		c=c+1;
		cout << "Ingrese la tercera calificacion: "; cin >> calif[c];
		c=c+1;
		cout << "Ingrese la cuarta calificacion: "; cin >> calif[c];
		c=c+1;
		cout << "Ingrese la quinta calificacion: "; cin >> calif[c];
		c=c+1;
		system("cls");
	}
	
	//Mostrar datos
	
	c=0;
	nomp=0;
	centrop=0;
	gradop=0;
	grupop=0;
	while(alumc!=10) {
		for(int x=0; x<=9; x++){
			cout << "Nombre: " << nom[nomp] << endl <<endl;
			cout << "Centro academico: " << centro[centrop] << endl <<endl;
			cout << "Grado: " << grado[gradop] << endl <<endl;
			cout << "Grupo: " << grupo[grupop] << endl <<endl;
			cout << "Calificaciones: ";
			for(int y=0; y<=4; y++){
				cout << calif[c] << " ,";
				prom = prom + calif[c];
				c=c+1;
			}
			cout << endl << endl;
			nomp=nomp+1;
			centrop=centrop+1;
			gradop=gradop+1;
			grupop=grupop+1;
			alumc=alumc+1;
			system("pause");
			system("cls");
		}
	} 
	return 0;
}