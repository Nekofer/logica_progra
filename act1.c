#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Ejercicio 1
	
	system ("color f9");
	float radio;
	float resultado; 
	printf("\n Ingrese el radio: "); scanf("%f",&radio);
	resultado=(3.1416*(radio*radio));
	printf("\n El radio del circulo es: %f",resultado);
	printf("\n\n");
	system("pause");
	system("cls");
	
	//Ejercicio 2
	
	int entrada; 
	float total; 
	printf("\n Ingrese su numero de entrada [Cada entrada vale $48.50]: "); scanf("%d",&entrada);
	total=(48.50*entrada);
	printf("\n El total a pagar es: %f", total);
	printf("\n\n");
	system("pause");
	system("cls");
	
	//Ejercicio 3
	
	char nombre[30];
	char id[8]; 
	char direccion[50]; 
	char numero_de_telefono[20]; 
	printf("\n Ingrese su nombre: "); scanf("%s",&nombre);
	printf("\n Ingrese su id: "); scanf("%s",&id);
	printf("\n Ingrese su direccion: "); scanf("%s",&direccion);
	printf("\n Ingrese su numero de telofono: "); scanf("%s",&numero_de_telefono);
	printf("\n\n");
	system("pause");
	system("cls");
	printf("\n Su nombre es: %s",nombre);
	printf("\n Su id es: %s",id);
	printf("\n Su direccion es: %s",direccion);
	printf("\n Su numero es: %s",numero_de_telefono);
	printf("\n\n");
	system("pause");
	system("cls");
	
	//Ejercicio 4 
	
	int actual; 
	int nacimiento; 
	int resultado1;
	printf("\n Ingrese el año actual: "); scanf("%d",&actual);
	printf("\n Ingrese el año que nacio: "); scanf("%d",&nacimiento);
	resultado1=(actual-nacimiento);
	printf("\n Su edad es: %d",resultado1);
	printf("\n\n");
	system("pause");
	system("cls");
	
	//Ejercicio 5
	
	float base;
	float altura; 
	float area;
	printf("\n Ingrese la base: "); scanf("%f",&base);
	printf("\n Ingrese la altura: "); scanf("%f",&altura);
	area=(base*altura);
	printf("\n El area del triangulo es: %f",area);
	printf("\n\n");
	system("pause");
	
	return 0;
}