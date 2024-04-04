#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system ("color f9");
	
	// Ejercicio 1
	
	int b;
	int h;
	int rA;
	int rP;
	cout << "Ingrese el valor de la base: "; cin >> b;
	cout << "Ingrese el valor de la altura: "; cin >> h;
	cout << endl;
	rA = b * h;
	rP = 2 * (b + h);
	cout << "El area del rectangulo es: " << rA << endl;
	cout << "El perimetro del rectangulo es: " << rP << endl;
	system ("pause");
	system ("cls");
	
	// Ejercicio 2
	
	char nom[30];
	char apP[30];
	char apM[30];
	char est[40];
	char ci[40];
	char num[10];
	cout << "Ingrese su nombre: "; cin >> nom;
	cout << "Ingrese su apellido paterno: "; cin >> apP;
	cout << "Ingrese su apellido paterno: "; cin >> apM; 
	cout << "Ingrese su estado: "; cin >> est;
	cout << "Ingrese su ciudad: "; cin >> ci;
	cout << "Ingrese su numero de telefono: "; cin >> num;
	system ("cls");
	cout << "Nombre: " << nom << " " << apP << " " << apM <<endl;
	cout << "Estado: " << est << endl;
	cout << "Ciudad: " << ci << endl;
	cout << "Telefono: " << num << endl;
	system ("pause");
	system ("cls");
	
	// Ejercicio 3
	
	char m1[20];
	char m2[20];
	char m3[20];
	char m4[20];
	char m5[20];
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;
	float pf;
	cout << "Ingrese su primera materia: "; cin >> m1;
	cout << "Ingrese su segunda materia: "; cin >> m2;
	cout << "Ingrese su tercera materia: "; cin >> m3;
	cout << "Ingrese su cuarta materia: "; cin >> m4;
	cout << "Ingrese su quinta materia: "; cin >> m5;
	cout << "Ingrese su primera calificacion: "; cin >> c1;
	cout << "Ingrese su segunda calificacion: "; cin >> c2;
	cout << "Ingrese su tercera calificacion: "; cin >> c3;
	cout << "Ingrese su cuarta calificacion: "; cin >> c4;
	cout << "Ingrese su quinta calificacion: "; cin >> c5;
	system ("cls");
	cout << "Primera materia: " << m1 << endl << "   Calificacion: " << c1 << endl;
	cout << "Segunda materia: " << m2 << endl << "   Calificacion: " << c2 << endl;
	cout << "Tercera materia: " << m3 << endl << "   Calificacion: " << c3 << endl;
	cout << "Cuarta materia: " << m4 << endl << "   Calificacion: " << c4 << endl;
	cout << "Quinta materia: " << m5 << endl << "   Calificacion: " << c5 << endl;
	pf = (c1 + c2 + c3 + c4 + c5)/5;
	cout << "El promedio final es de: " << pf;
	return 0;
}