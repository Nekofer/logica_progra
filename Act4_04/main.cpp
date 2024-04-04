#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main(int argc, char** argv) {
	
	system ("color f9");
	int nums[100];
	int i=0;
	int aux, x, y, mayor=0, menor=999;
	int cont1=0, cont2=0, cont3=0;
	int n5=5, n25=25, n50=50;
	
	// Numeros aleatorios
	
	srand(time(NULL));
	for(i=0; i<=100; i++){
		nums[i]= 1+rand()%(101-1);
		cout << nums[i] << endl;
    }    
    system("pause");
	system("cls");
	
	// Lista ordenada
	
	for ( x = 0; x < 100; x++){
		for ( y = x+1; y < 100; y++){
			if (nums[x] > nums[y]){
				aux = nums[y];
				nums[y] = nums[x];
				nums[x] = aux;
			}
		}
	}
	cout << endl;
	cout << "Lista ordenada: " << endl << endl;
	for (x = 0; x < 100; x++){
		cout << nums[x] << endl;
	} 
	system("pause");
	system("cls");
	
	// Numero mayor y menor
	
	for (x = 0; x < 100; x++){
		if (nums[x]>mayor){
			mayor = nums[x];
		}
		if (nums[x]<menor){
			menor = nums[x];
		}
	}
	cout << "El numero mayor es: " << mayor << endl;
	cout << "El numero menor es: " << menor << endl;
	system("pause");
	system("cls");
	
	// 5, 25, 50
	
	for (i=0; i<100; i++){
		if (n5==nums[i]){
			cont1++;
		}
	}
	for (i=0; i<100; i++){
		if (n25==nums[i]){
			cont2++;
		}
	}
	for (i=0; i<100; i++){
		if (n50==nums[i]){
			cont3++;
		}
	}
	cout << "El valor solicitado 5 aparece " << cont1 << " veces" <<endl;
    cout << "El valor solicitado 25 aparece " << cont2 << " veces" <<endl;
    cout << "El valor solicitado 50 aparece " << cont3 << " veces" <<endl;
	
	return 0;
}