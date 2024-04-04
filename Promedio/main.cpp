#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	int conta;
	float r;
	int var = 0;
	system("color f9");
	for(int x = 0; x<=9; x++){
		cout << "Ingrese la calificacion: "; cin >> num;
		var = var + num;
		conta = conta + 1;
	}
	r = (var/conta);
	cout << "El promedio es de: " << r << endl << endl;
	system ("pause");
	system ("cls");

	
	//Tabla de multiplicar
	
	int tabla;
	int conta2 = 0;
	int re;
	cout << "Ingrese un numero: "; cin >> tabla;
	for (int i = 0; i<=9; i++){
		conta2 = conta2 + 1;
		re = (tabla * conta2);
		cout << tabla << " * " << conta2 << " = " << re << endl; 
	}
	system ("pause");
	system("cls");
	
	//0 a 100
	
	int conta3 = 0;
	int resul;
	for(int y=0; y<=99; y++){
		conta3 = conta3 + 1;
		cout << conta3 - 1 << " + " << conta3 << endl;
		resul = resul + conta3;
		cout << resul << endl;
	}
	system ("pause");
	return 0;
}