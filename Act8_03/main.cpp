#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sel;
	int selcam, selcar;
	int camAu, carAu;
	int camEs, carEs;
	string sele;
	string selca;
	string camA;
	string camE;
	system("color f9");
	cout << "Camioneta[1] \n";
	cout << "Automovil[2] \n";
	cout << "Ingrese el tipo de vehiculo: "; cin >> sel;
	system("cls");
	if (sel==1){
		sele = "Camioneta";
		cout << "Ram[1] \n";
		cout << "GMC[2] \n";
		cout << "Chevrolet[3] \n";
		cout << "Ford[4] \n";
		cout << "Honda[5] \n";
		cout << "Seleccione la marca: "; cin >> selcam;
		system("cls");
		switch(selcam){
			case 1: selca = "Ram";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
					
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;	
										
			case 2: selca = "GMC";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
					
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;
			
			case 3: selca = "Chevrolet";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
					
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;
			
			case 4: selca = "Ford";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
			
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;
			
			case 5: selca = "Honda";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
					
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;
		}
	}
	else if(sel==2){
		sele = "Automovil";
		cout << "Mazda[1] \n";
		cout << "Acura[2] \n";
		cout << "Toyota[3] \n";
		cout << "Ford[4] \n";
		cout << "Honda[5] \n";
		cout << "Seleccione la marca: "; cin >> selcam;
		system("cls");
		switch(selcam){
			case 1: selca = "Mazda";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
					
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;	
										
			case 2: selca = "Acura";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
					
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;
			
			case 3: selca = "Toyota";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
					
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;
			
			case 4: selca = "Ford";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
					
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;
			
			case 5: selca = "Honda";
					cout << "Automatico[1] \n";
					cout << "Por velocidades[2] \n";
					cout << "Seleccione el tipo: "; cin >> camAu;
					system("cls");
					switch(camAu){
					
						case 1: camA = "Automatico";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
						
						case 2: camA = "Velocidades";
								cout << "Estereo incluido[1] \n";
								cout << "Estereo no incluido[2] \n";
								cout << "Seleccione el tipo: "; cin >> camEs;
								system("cls");
								switch(camEs){
							
									case 1:
										camE = "Estereo";
										system("cls");
										break;
									case 2:
										camE = "NoEstereo";
										system("cls");
										break;
									}
						break;
					}
			break;
		}
	}
	cout << "Los datos seleccionados fueron: " << endl << endl << sele << endl << endl << selca << endl << endl << camA << endl << endl << camE << endl << endl;
	system ("pause");
	return 0;
}