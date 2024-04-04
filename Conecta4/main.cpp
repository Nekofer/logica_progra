#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
using namespace std;

int tablero[6][7];
int tu=1;
string n1, n2;
int c1, c2, i, j;
int final;
int ops, rr;

void llenarMatriz(){ //Listo //Esta funcion sirve para llenar la matriz con 0
	for(int x=0; x<=5; x++){
		for(int y=0; y<=6; y++){
			tablero[x][y]=0;
		}
	}
}

void jugada1(){ //Listo //Esta funcion sirve para que el jugador 1 pueda colocar su ficha en el tablero y revisar si ya hay algunas ficha anterior en la columna que se elija
	int co;
	
	cout << "Ingrese la columna [1 - 7]: "; cin >> co;
	switch(co){
		case 1:
				if (tablero[5][0]==0){
					tablero[5][0]=1;	
				}
				else if (tablero[4][0]==0){
					tablero[4][0]=1;
				}
				else if (tablero[3][0]==0){
					tablero[3][0]=1;	
				}
				else if (tablero[2][0]==0){
					tablero[2][0]=1;	
				}
				else if (tablero[1][0]==0){
					tablero[1][0]=1;	
				}
				else if (tablero[0][0]==0){
					tablero[0][0]=1;	
				}
				else if (tablero[0][0]==1 || tablero[0][0]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;	
				}
		break;
		
		case 2:
				if (tablero[5][1]==0){
					tablero[5][1]=1;	
				}
				else if (tablero[4][1]==0){
					tablero[4][1]=1;	
				}
				else if (tablero[3][1]==0){
					tablero[3][1]=1;
				}
				else if (tablero[2][1]==0){
					tablero[2][1]=1;
				}
				else if (tablero[1][1]==0){
					tablero[1][1]=1;	
				}
				else if (tablero[0][1]==0){
					tablero[0][1]=1;
				}
				else if (tablero[0][1]==1 || tablero[0][1]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;
				}
		break;
		
		case 3:
				if (tablero[5][2]==0){
					tablero[5][2]=1;
				}
				else if (tablero[4][2]==0){
					tablero[4][2]=1;	
				}
				else if (tablero[3][2]==0){
					tablero[3][2]=1;	
				}
				else if (tablero[2][2]==0){
					tablero[2][2]=1;	
				}
				else if (tablero[1][2]==0){
					tablero[1][2]=1;	
				}
				else if (tablero[0][2]==0){
					tablero[0][2]=1;	
				}
				else if (tablero[0][2]==1 || tablero[0][2]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;	
				}
		break;
		
		case 4:
				if (tablero[5][3]==0){
					tablero[5][3]=1;				
				}
				else if (tablero[4][3]==0){
					tablero[4][3]=1;				
				}
				else if (tablero[3][3]==0){
					tablero[3][3]=1;				
				}
				else if (tablero[2][3]==0){
					tablero[2][3]=1;				
				}
				else if (tablero[1][3]==0){
					tablero[1][3]=1;				
				}
				else if (tablero[0][3]==0){
					tablero[0][3]=1;				
				}
				else if (tablero[0][3]==1 || tablero[0][3]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;				
				}		
		break;
		
		case 5:		
				if (tablero[5][4]==0){
					tablero[5][4]=1;				
				}
				else if (tablero[4][4]==0){
					tablero[4][4]=1;				
				}
				else if (tablero[3][4]==0){
					tablero[3][4]=1;				
				}
				else if (tablero[2][4]==0){
					tablero[2][4]=1;				
				}
				else if (tablero[1][4]==0){
					tablero[1][4]=1;				
				}
				else if (tablero[0][4]==0){
					tablero[0][4]=1;				
				}
				else if (tablero[0][4]==1 || tablero[0][4]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;				
				}	
		break;
		
		case 6:		
				if (tablero[5][5]==0){
					tablero[5][5]=1;			
				}
				else if (tablero[4][5]==0){
					tablero[4][5]=1;			
				}
				else if (tablero[3][5]=0){
					tablero[3][5]=1;			
				}
				else if (tablero[2][5]==0){
					tablero[2][5]=1;			
				}
				else if (tablero[1][5]==0){
					tablero[1][5]=1;			
				}
				else if (tablero[0][5]==0){
					tablero[0][5]=1;			
				}
				else if (tablero[0][5]==1 || tablero[0][5]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;			
				}		
		break;
		
		case 7:
				if (tablero[5][6]==0){
					tablero[5][6]=1;				
				}
				else if (tablero[4][6]==0){
					tablero[4][6]=1;				
				}
				else if (tablero[3][6]==0){
					tablero[3][6]=1;				
				}
				else if (tablero[2][6]==0){
					tablero[2][6]=1;				
				}
				else if (tablero[1][6]==0){
					tablero[1][6]=1;				
				}
				else if (tablero[0][6]==0){
					tablero[0][6]=1;				
				}
				else if (tablero[0][6]==1 || tablero[0][6]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;	
				}	
		break;
		
		default:
			cout << "esa no es una de las opciones bro" << endl;
			cin.ignore(256,'\n');
		break;
	}
}

void jugada2(){ //Listo //Esta funcion sirve para que el jugador 2 pueda colocar su ficha en el tablero y revisar si ya hay algunas ficha anterior en la columna que se elija
	int co;
	cout << "Ingrese la columna [1 - 7]: "; cin >> co;
	switch(co){
		case 1:	
				if (tablero[5][0]==0){
					tablero[5][0]=2;			
				}
				else if (tablero[4][0]==0){
					tablero[4][0]=2;			
				}
				else if (tablero[3][0]==0){
					tablero[3][0]=2;			
				}
				else if (tablero[2][0]==0){
					tablero[2][0]=2;			
				}
				else if (tablero[1][0]==0){
					tablero[1][0]=2;			
				}
				else if (tablero[0][0]==0){
					tablero[0][0]=2;			
				}
				else if (tablero[0][0]==1 || tablero[0][0]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;			
				}	
		break;
		
		case 2:		
				if (tablero[5][1]==0){
					tablero[5][1]=2;			
				}
				else if (tablero[4][1]==0){
					tablero[4][1]=2;			
				}
				else if (tablero[3][1]==0){
					tablero[3][1]=2;			
				}
				else if (tablero[2][1]==0){
					tablero[2][1]=2;			
				}
				else if (tablero[1][1]==0){
					tablero[1][1]=2;			
				}
				else if (tablero[0][1]==0){
					tablero[0][1]=2;			
				}
				else if (tablero[0][1]==1 || tablero[0][1]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;			
				}	
		break;
		
		case 3:	
				if (tablero[5][2]==0){
					tablero[5][2]=2;			
				}
				else if (tablero[4][2]==0){
					tablero[4][2]=2;				
				}
				else if (tablero[3][2]==0){
					tablero[3][2]=2;				
				}
				else if (tablero[2][2]==0){
					tablero[2][2]=2;				
				}
				else if (tablero[1][2]==0){
					tablero[1][2]=2;				
				}
				else if (tablero[0][2]==0){
					tablero[0][2]=2;				
				}
				else if (tablero[0][2]==1 || tablero[0][2]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;				
				}		
		break;
		
		case 4:		
				if (tablero[5][3]==0){
					tablero[5][3]=2;				
				}
				else if (tablero[4][3]==0){
					tablero[4][3]=2;				
				}
				else if (tablero[3][3]==0){
					tablero[3][3]=2;				
				}
				else if (tablero[2][3]==0){
					tablero[2][3]=2;				
				}
				else if (tablero[1][3]==0){
					tablero[1][3]=2;				
				}
				else if (tablero[0][3]==0){
					tablero[0][3]=2;				
				}
				else if (tablero[0][3]==1 || tablero[0][3]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;				
				}		
		break;
		
		case 5:	
					if (tablero[5][4]==0){
						tablero[5][4]=2;						
					}
					else if (tablero[4][4]==0){
						tablero[4][4]=2;					
					}
					else if (tablero[3][4]==0){
						tablero[3][4]=2;					
					}
					else if (tablero[2][4]==0){
						tablero[2][4]=2;					
					}
					else if (tablero[1][4]==0){
						tablero[1][4]=2;					
					}
					else if (tablero[0][4]==0){
						tablero[0][4]=2;					
					}
					else if (tablero[0][4]==1 || tablero[0][4]==2){
						cout << "La columna esta llena, por favor, eliga otra" << endl;					
					}
		break;
		
		case 6:			
				if (tablero[5][5]==0){
					tablero[5][5]=2;				
				}
				else if (tablero[4][5]==0){
					tablero[4][5]=2;				
				}
				else if (tablero[3][5]==0){
					tablero[3][5]=2;				
				}
				else if (tablero[2][5]==0){
					tablero[2][5]=2;				
				}
				else if (tablero[1][5]==0){
					tablero[1][5]=2;				
				}
				else if (tablero[0][5]==0){
					tablero[0][5]=2;				
				}
				else if (tablero[0][5]==1 || tablero[0][5]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;				
				}	
		break;
		
		case 7:
				if (tablero[5][6]==0){
					tablero[5][6]=2;				
				}
				else if (tablero[4][6]==0){
					tablero[4][6]=2;				
				}
				else if (tablero[3][6]==0){
					tablero[3][6]=2;				
				}
				else if (tablero[2][6]==0){
					tablero[2][6]=2;				
				}
				else if (tablero[1][6]==0){
					tablero[1][6]=2;				
				}
				else if (tablero[0][6]==0){
					tablero[0][6]=2;			
				}
				else if (tablero[0][6]==1 || tablero[0][6]==2){
					cout << "La columna esta llena, por favor, eliga otra" << endl;				
				}	
		break;
		
		default:
			cout << "esa no es una de las opciones bro" << endl;
			cin.ignore(256,'\n');
		break;
	}
}

void turno(){ //Listo //Esta funcion dictamita a que jugador le toca
	int opc;
	if (tu==1){
		cout << "Turno: " << n1 << endl;
		jugada1();
		tu=2;
	}
	else if(tu==2){
		cout << "Turno: " << n2 << endl;
		jugada2();
		tu=1;
	}	
}

void mostrar(){ //Listo //Esta funcion muesta la matriz 
	cout << "\t|1| \t|2| \t|3| \t|4| \t|5| \t|6| \t|7| ";
	cout << endl << endl;
	for (int x=0; x<=5; x++){
		for (int y=0; y<=6; y++){
			cout << "\t " << tablero[x][y];
		}
		cout << endl << endl;
	}
}

void nombres(){ //Listo //En esta funcion se guardan los nombres de los jugadores
	cout << endl;
	cout << "Ingrese el nombre del jugador 1: "; cin >> n1;
	cout << endl;
	cout << "Ingrese el nombre del jugador 2: "; cin >> n2;
	cout << endl;
}

void cargando(){ //Listo //En esta funcion sale la animacion de la pantalla de carga
	int seg=5;
	for(int x=0; x<=8; x++){
		cout << "\n";
	}
	cout << "\t\t\t\t\t\t        CARGANDO...\n";
	for(int y=0; y<=119; y++){
		cout << "_";
	} 
	for(int z=0; z<=119; z++){
		cout << char(219);
		Sleep(seg*1000/80);
	}
	system("cls");
	for(int x=0; x<=8; x++){
		cout << "\n";
	}
	cout << "\t\t\t\t\t\t        COMPLETADO\n";
	system("pause");
	system("cls");
}

void rganador(){ //Listo //En esta funcion se revisa quien gano y ademas permite volver a jugar
	for(i=0; i<=5; i++){
		for(j=0; j<=6; j++){
			if(tablero[i][j]==1 && tablero[i][j+1]==1 && tablero[i][j+2]==1 && tablero[i][j+3]==1 || tablero[i][j]==1 && tablero[i][j-1]==1 && tablero[i][j-2]==1 && tablero[i][j-3]==1 || tablero[i][j]==1 && tablero[i+1][j]==1 && tablero[i+2][j]==1 && tablero[i+3][j]==1 || tablero[i][j]==1 && tablero[i-1][j]==1 && tablero[i-2][j]==1 && tablero[i-3][j]==1 || tablero[i][j]==1 && tablero[i+1][j+1]==1 && tablero[i+2][j+2]==1 && tablero[i+3][j+3]==1 || tablero[i][j]==1 && tablero[i+1][j-1]==1 && tablero[i+2][j-2]==1 && tablero[i+3][j-3]==1){
			 system("cls");
			 cout << endl << "gana el jugador: " << n1 << endl << endl;
			 cout << endl << endl << "Desea seguir jugando? [1=Si // 2=No]: "; cin >> ops;
			 switch(ops){
			 	case 1: 
			 		cout << "El juego continuara...";
			 		llenarMatriz();
			 		final=0;
			 	break;
			 	
			 	case 2:
			 		exit(1);
			 	break;
			 	
			 	default:
			 		cout << "Esa no es ninguna de las opciones...     El juego continuara...";
			 		llenarMatriz();
			 		final=0;
			 	break;
			 }
			 system("pause");
           }
           else if(tablero[i][j]==2 && tablero[i][j+1]==2 && tablero[i][j+2]==2 && tablero[i][j+3]==2 || tablero[i][j]==2 && tablero[i][j-1]==2 && tablero[i][j-2]==2 && tablero[i][j-3]==2 || tablero[i][j]==2 && tablero[i+1][j]==2 && tablero[i+2][j]==2 && tablero[i+3][j]==2 || tablero[i][j]==2 && tablero[i-1][j]==2 && tablero[i-2][j]==2 && tablero[i-3][j]==2 || tablero[i][j]==2 && tablero[i+1][j+1]==2 && tablero[i+2][j+2]==2 && tablero[i+3][j+3]==2 || tablero[i][j]==2 && tablero[i+1][j-1]==2 && tablero[i+2][j-2]==2 && tablero[i+3][j-3]==2){
			 system("cls");
			 cout << endl << "gana el jugador: " << n2 << endl << endl;
			 cout << endl << endl << "Desea seguir jugando? [1=Si // 2=No]: "; cin >> ops;
			 switch(ops){
			 	case 1: 
			 		cout << "El juego continuara...";
			 		llenarMatriz();
			 	break;
			 	
			 	case 2:
			 		exit(1);
			 	break;
			 	
			 	default:
			 		cout << "Esa no es ninguna de las opciones...     El juego continuara...";
			 		llenarMatriz();
			 	break;
			 }
			 system("pause");
           }
		}
	}
}

int main(){ //Funcion principal del programa 
	
	system("color f9");
	
	int op;
	int op2=2;
	cargando(); //LLamando a la funcion cargando
	
	cout << "              " <<char(220) << "                                   " << char(220) <<endl;
	cout << "            " <<char(220) << "   " <<char(220) << "                               " <<char(220) << "   " <<char(220) << endl;
	cout << "            " <<char(220) << "   " <<char(220) << "                               " <<char(220) << "   " <<char(220) << endl;
	cout << "            " <<char(220) << "   " <<char(220) << "                               " <<char(220) << "   " <<char(220) << endl;
	cout << "            " <<char(220) << "   " <<char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << "   " << char(220) << endl;
	cout << "           " <<char(220) << "    " <<char(220) << "                               " << char(220) << "    " << char(220) << endl;
	cout << "           " << char(220) << "                                         " << char(220) << endl;
	cout << "           " << char(220) << "      " << char(219)  << "                           " << char(219) << "      " << char(220) << endl;
	cout << "          " << char(220) << "                                           " << char(220) <<endl;
	cout << "          " << char(220) << "     " << char(220) << " " << char(220) << "                           " << char(220) << " " << char(220) << "     " << char(220) << endl;
	cout << "           " << char(220) << "                                         " << char(220) <<endl;
	cout << "            " << char(220) << "               " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << "               " << char(220) <<endl;
	cout << "             " << char(220) << " " << char(220) << " " << char(220) << " " << char(220)  << " " << char(220) << " " << char(220) << " " << char(220)  << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220)  << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) << " " << char(220) <<endl;
	cout << "                              " << char(220) << " " << char(220) << " " << char(220) << endl;
	cout << "                                " << char(220);  //Logo de UnderStudio, char(220) es codigo ascii 
	
	cout << endl <<endl;
	cout << " By: UnderStudio" << endl;
	system("pause");
	system("cls");
	
	do{
		cout << "            " << char(220) << " " << char(220) << " " << char(220) << "   " << char(220) << " " << char(220) << " " << char(220) << "   " << char(220) << "    " << char(220) << "   " << char(220) << " " << char(220) << " " << char(220) << "   " << char(220) << " " << char(220) << " " << char(220) << "   " << char(220) << " " << char(220) << " " << char(220) << "   " << char(220) << " " << char(220) << " " << char(220)  << "       " << char(220) << "   " << char(220) << endl;
		cout << "            " << char(220) << "       " << char(220)  << "   " << char(220) << "   " << char(220) << " " << char(220) << "  " << char(220) << "   " << char(220) << "       " << char(220) << "         " << char(220) << "     " << char(220) << "   " << char(220) << "       " << char(220) << "   " << char(220) << endl;
		cout << "            " << char(220) << "       " << char(220)  << "   " << char(220) << "   " << char(220) << "  " << char(220)  << " " << char(220) << "   " << char(220) << " " << char(220) << "     " << char(220) << "         " << char(220) << "     " << char(220) << " " << char(220) << " " << char(220) << "       " << char(220) << " " << char(220) << " " << char(220) << endl; 
		cout << "            " << char(220) << " " << char(220) << " " << char(220) << "   " << char(220) << " " << char(220) << " " << char(220) << "   " << char(220) << "    " << char(220) << "   " << char(220) << " " << char(220) << " " << char(220) << "   " << char(220) << " " << char(220) << " " << char(220) << "     " << char(220) << "     " << char(220) << "   " << char(220) << "           " << char(220) << endl;
		cout << endl;
		cout << "Realizado por: Fernando Toledo Pacciotta y Daniela Sarahí Martínez Martínez";
		cout << endl;
		cout << endl;
		cout << "Bienvenido al juego del conecta 4, desea empezar a jugar? [1=Si // 2=No]: "; cin >> op;
		if(op==1){
			nombres(); //LLamando a la funcion nombres
			system("cls");
		}
		switch(op){
			case 1:
				do{
					cout << endl; //Empieza el juego
					mostrar();
					turno();
					final++;
					rganador();
					system("cls");
				}while(op2!=1 || final==42); //Condiciones para acabar el juego
			break;
			
			case 2:
				exit(1); //Caso en el que no se quiso empezar a jugar
			break;
			
			default:
				cout << "Esa no es una opcion" << endl; //Caso en que no se coloque ninguna de las opciones mencionadas
			break;
		}
	}while(op!=2); //Condicion de salida del ciclo
	
	return 0;
}