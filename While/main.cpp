#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system ("color f9");
	int p=0;
	while (p != 10){
		int nums[8];
		int i, total=0;
		for(i=0; i<=8; i++)
		{
			cout << "Introduzca el numero: "; cin >> nums[i];
		}
		cout << "Lista de numeros: \n";
		for (i=0; i<8; i++)
		{
			cout << nums[i];
			total+=nums[i];
		}
		cout << "\nLa suma de los numeros es: " << total;
		system ("pause>nul");
		system ("cls");
		cout << "Quiere terminar el programa?: Si[10] / No[5] "; cin >> p;
	}
	system("cls");
	
	//
	
	return 0;
}