// Fernando Toledo  - 27/03/2022

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dado1=0, dado2=0;
int aux=0;
int r;

void random(){
	srand(time(NULL));
	for (int i=0; i<=1; i++){
		dado1 = 1+rand()%(7-1);
		dado2 = 1+rand()%(7-1);
	}
	r = dado1+dado2;
} 

int main(int argc, char** argv) {
	system("color f9");
	int mI, bet, mA, op, aux2, op2;
	cout << "Ingrese su monto inicial: "; cin >> mI;
	do{
		cout << "Cuanto desea apostar?: [Apuesta minima 5$] "; cin >> bet;
		if (mI >= 5){
			if (bet >= 5){
				random();
				cout << "A que desea apostar? 1.- Par / 2.- Impar / 3.- Suman 7  "; cin >> op;
				switch(op){
					case 1: if (r == 2){
						cout << endl << "Perdiste" << endl;
						mI = mI - bet;
						cout << "Te quedan: " << mI << endl << endl;
						system ("pause");
						system ("cls");
					}
					else if (dado1 == dado2){
						cout << endl << "Felicidades ganaste el doble" << endl;
						aux2 = bet * 2;
						mI = mI + aux2;
						cout << endl << "Te quedan: " << mI << endl << endl;
						system ("pause");
						system ("cls");
					}
					else if (dado1 != dado2){
						cout << endl << "Perdiste" << endl;
						mI = mI - bet;
						cout << endl << "Te quedan: " << mI << endl << endl;
						system ("pause");
						system ("cls");
						random();
					}
					break;
					
					case 2: if (r == 2){
						cout << endl << "Perdiste" << endl;
						mI = mI - bet;
						cout << endl << "Te quedan: " << mI << endl << endl;
						system ("pause");
						system ("cls");
					}
					else if (dado1 != dado2){
						cout << endl << "Felicidades ganaste el doble" << endl;
						aux2 = bet * 2;
						mI = mI + aux2;
						cout << endl << "Te quedan: " << mI << endl << endl;
						system ("pause");
						system ("cls");
					}
					else if (dado1 == dado2){
						cout << endl << "Perdiste" << endl;
						mI = mI - bet;
						cout << endl << "Te quedan: " << mI << endl << endl;
						system ("pause");
						system ("cls");
					}
					break;
					
					case 3: if (r == 7){
						cout << endl << "Felicidades ganaste el triple" << endl;
						aux2 = bet * 3;
						mI = mI + aux2;
						cout << endl << "Te quedan: " << mI << endl << endl;
						system ("pause");
						system ("cls");
					}
					else{
						cout << endl << "Perdiste" << endl;
						mI = mI - bet;
						cout << endl << "Te quedan: " << mI << endl << endl;
						system ("pause");
						system ("cls");
					}
					break;
					
					default:
					cout << endl << "El valor ingresado no es una de las opciones ";
					system ("pause");
					system ("cls");
					break;
				}
			}
			else{
				cout << "Bro la apuesta minima es 5, que sos gil acaso?";
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
	} while(op2 != 2);
	return 0;
}