#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system("color f9");
	float num[10];
	int i=0, aux=0, aux2=0,mayor=0, menor=999;
	float media=0;
	float r=0;
	int x=0, z=0;
	
	for (x = 0; x < 10; x++){
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
	cout << "La media es: " << media/10 << endl;
	system("pause"); 
	
	system("cls");
	
	for (x = 0; x < 10; x++){
		for (int y = x+1; y < 10; y++){
			if (num[x] > num[y]){
				aux = num[y];
				num[y] = num[x];
				num[x] = aux;
			}
		}
	}
	
	r = (num[4] + num[5])/2;
	
	cout << "La mediana es: " << r;
	
	for (x = 0; x < 10; x++){
		for (int y = x+1; y < 10; y++){
			if (num[x] = num[y]){
				aux2 = num[y];
			}
		}
	}
	
	cout << "La moda es: " << aux2;
	
	/*for (x = 0; x < 10; x++){
		cout << "Lista ordenada: " << num[x] << endl;
	} */
	
	return 0;
}