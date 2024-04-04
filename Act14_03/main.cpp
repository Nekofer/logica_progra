#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system("color f9");
	cout << "Bro, vas a responder 3 problemas, esfuerzate crack " << endl << endl;
	system ("pause");
	system("cls");
	cout << "Primer ejercicio: " << endl << endl;
	int n1, n2, n3;
	int r=0; 
	while (r != 100){
		cout << "Ingresa 3 numeros que sumados den 100: " << endl << endl;
		cout << "1.- "; cin >> n1;
		cout << "2.- "; cin >> n2;
		cout << "3.- "; cin >> n3;
		r = n1 + n2 + n3;
	}
	cout << "Felicidades, pasaste el primero, ok, ahora va el segundo:" << endl << endl;
	system ("pause");
	system ("cls");
	
	int n1_1, n2_2;
	int re=0;
	cout << "Segundo ejercicio:" << endl << endl;
	while (re != 50){
	cout << "Ingresa 2 que multiplicados den 50: " << endl << endl;
	cout << "1.- "; cin >> n1_1;
	cout << "2.- "; cin >> n2_2;
	re = n1_1 * n2_2;
	}
	cout << "Felicidades, pasaste el segundo, ok, ahora va el tercero:" << endl << endl;
	system ("pause");
	system ("cls");
	
	int n3_1, n3_2;
	int rel=0;
	cout << "Tercer ejercicio:" << endl << endl;
	while (rel != 3){
	cout << "Ingresa 2 que restados den 3: " << endl << endl;
	cout << "1.- "; cin >> n3_1;
	cout << "2.- "; cin >> n3_2;
	rel = n3_1 - n3_2;
	}
	cout << "Felicidades, terminaste, sos terrible genio" << endl << endl;
	system ("pause");
	system ("cls");
	
	int y1, y2, y3;
	int resul;
	while (resul !=y3){
		cout << "Ingrese el primer anio: "; cin >> y1;
		cout << "Ingrese el segundo anio: "; cin >> y2;
		cout << "Ingrese el resultado de la diferencia: "; cin >> y3;
		resul = y1 - y2;
	}
	cout << "Bien ahi";
	system ("pause");
	return 0;
}