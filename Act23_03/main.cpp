#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system("color f9");
	int tipo;
	int horas=0;
	int aux;
	float r=0, re=0;
	float extra;
	char p[2];
	do{
		cout << "Ingrese el tipo de empleo: [Tipo 1, Tipo 2, Tipo 3] "; cin >> tipo;
		switch(tipo){
			case 1: cout << "Ingrese la cantidad de horas trabajadas: "; cin >> horas;
					if (horas > 160){
						r = 160 * 350;
						aux = horas - 160;
						extra = aux * 385;
						re = extra + r;
					}
					else {
						r = horas * 350;
					}
					cout << "El total de horas trabajadas son: " << horas - extra << endl << endl;
					cout << "El total de horas extras son: " << extra << endl << endl;
					cout << "El sueldo normal del mes es de: " << r << endl << endl;
					cout << "El sueldo extra del mes es de: " << re << endl << endl;
					cout << "El sueldo total del mes es de: " << r + re << endl << endl;
					system("pause");
					system("cls");
					break;
			case 2: cout << "Ingrese la cantidad de horas trabajadas: "; cin >> horas;
					if (horas > 160){
						r = 160 * 420;
						aux = horas - 160;
						extra = aux * 462;
						re = extra + r;
					}
					else {
						r = horas * 420;
					}
					cout << "El total de horas trabajadas son: " << horas - extra << endl << endl;
					cout << "El total de horas extras son: " << extra << endl << endl;
					cout << "El sueldo normal del mes es de: " << r << endl << endl;
					cout << "El sueldo extra del mes es de: " << re << endl << endl;
					cout << "El sueldo total del mes es de: " << r + re << endl << endl;
					system("pause");
					system("cls");
					break;
			case 3: cout << "Ingrese la cantidad de horas trabajadas: "; cin >> horas;
					if (horas > 160){
						r = 160 * 483;
						aux = horas - 160;
						extra = aux * 531;
						re = extra + r;
					}
					else {
						r = horas * 483;
					}
					cout << "El total de horas trabajadas son: " << horas - extra << endl << endl;
					cout << "El total de horas extras son: " << extra << endl << endl;
					cout << "El sueldo normal del mes es de: " << r << endl << endl;
					cout << "El sueldo extra del mes es de: " << re << endl << endl;
					cout << "El sueldo total del mes es de: " << r + re << endl << endl;
					system("pause");
					system("cls");
					break;
		}
		cout << "Quiere calcular otro sueldo?: [Si / No]"; cin >> p;
	} while(strcmp(p,"No") || strcmp(p,"no") || strcmp(p,"NO"));
	return 0;
}