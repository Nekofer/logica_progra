#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



/*void nums(){
	cout << endl << "Ingrese cuantos numeros quiere ingresar en su arreglo: "; cin >> tam;
	cout << endl;
	for (int i=0; i<=tam; i++){
		cout << "Ingrese un numero: "; cin >> numero[i];
		if (numero[i]>maximo){
			maximo = numero[i];
		}
		if (numero[i]<minimo){
			minimo = numero[i];
		}
		media+=numero[i];
	}
	cout << "El numero mayor es: " << maximo << endl;
	cout << "El numero menor es: " << minimo << endl;
	cout << "La media es: " << media/10 << endl;
	system("pause"); 
	system("cls");
	
	for (x = 0; x < 10; x++){
		for (int y = x+1; y < 10; y++){
			if (numero[x] > numero[y]){
				aux = numero[y];
				numero[y] = numero[x];
				numero[x] = aux;
			}
		}
	}
	
	for (x = 0; x < 10; x++){
		for (int y = x+1; y < 10; y++){
			if (numero[x] > numero[y]){
				aux = numero[y];
				numero[y] = numero[x];
				numero[x] = aux;
			}
		}
	}
}*/



int main(int argc, char** argv) {
	
	system ("color f9");
	
	int tam=0;
	float num[tam];
	int i=0, aux=0, aux2=0, mayor=0, menor=999;
	float media=0;
	float r=0;
	int x=0, z=0;
	
	cout << "Ingrese la cantidad de numeros a ingresar: "; cin >> tam;
	for (x = 0; x < tam; x++){
		cout << "Ingrese un numero: "; cin >> num[x];
		if (num[x]>mayor){
			mayor = num[x];
		}
		if (num[x]<menor){
			menor = num[x];
		}
		media+=num[x];
	}
	
	system("cls");
	
	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor << endl;
	cout << "La media es: " << media/tam << endl;
	system("pause"); 
	
	system("cls");
	

	
	return 0;
}