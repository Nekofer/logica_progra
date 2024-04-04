// Fernando Toledo  - 13/04/2022

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int c1=0, c2=0;

void cartas(){
	srand(time(NULL));
	for (int i=0; i<=1; i++){
		c1 = 1+rand()%(14-1);
		c2 = 1+rand()%(14-1);
	}
} 

int main(int argc, char** argv) {
	system("color f9");
	int mI, bet, mA, op2;
	cout << "Ingrese su monto inicial: "; cin >> mI;
	cout << "Desea empezar a jugar?: [1 Si] / [2 No] "; cin >> op2;
	while(op2 != 2) {
		cout << "Cuanto desea apostar?: [Apuesta minima 50$] "; cin >> bet;
		if (mI >= 50){
			if (bet >= 50){
				cartas();
				switch(c1){
					case 1: cout << "Tu carta es un As"; 		 
					break;
					
					case 11: cout << "Tu carta es un Jack"; 		 
					break;
					
					case 12: cout << "Tu carta es una Reina"; 		 
					break;
					
					case 13: cout << "Tu carta es un Rey";		 
					break;
					
					default: cout << "Tu carta es un: " << c1;
					break;
				}
				
				switch(c2){
					case 1: cout << "Tu carta es un As"; 		 
					break;
					
					case 11: cout << "Tu carta es un Jack"; 		 
					break;
					
					case 12: cout << "Tu carta es una Reina"; 		 
					break;
					
					case 13: cout << "Tu carta es un Rey";		 
					break;
					
					default: cout << "Tu carta es un: " << c2;
					break;
				}
				if(c1>c2){
					cout << "Gana el jugador \n";
					mI = mI + (bet*2);
					cout << "Tienes: " << mI;
				} else if(c2>c1){
					cout << "Gana la maquina \n";
					mI = mI - bet;
					cout << "Tienes: " << mI;
				} else if(c2==c1){
					cout << "Empate \n";
					cout << "Tienes: " << mI;
				}
			}
			else{
				cout << "Bro la apuesta minima es 50";
				system ("pause");
				system ("cls");
			}
		}
		else {
			cout << endl << "No cuenta con los fondos suficientes para apostar, le gustaria ingresar mas fondos? [1] o dejar de jugar? [2] "; cin >> op2;
			if (op2 == 1){
				cout << endl << "Cuantos fondos desea agregar? "; cin >> mA;
				mI = mI + mA;
				system ("pause");
				system ("cls");
			}
			else{
				break;
			}
		}
		cout << "Quisiera jugar de nuevo?: [1 Si] / [2 No] "; cin >> op2;
	} 
	return 0;
}