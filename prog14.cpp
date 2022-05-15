/*Autor Oscar Eduardo FLetes Ixta, creado 21/02/22
	programa que pida cualquier cantidad de numeros y los sume 
	el programa terminara de leer numeros cuando se introduzca un 0.
	usando e lciclo do-while 
	Programa en lenguaje c que muestra el uso de scanf, y el uso del ciclo do while
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int, float
		-scanf
		-Operaciones aritmeticas 
		-Uso del ciclo do while
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras y flotantes, como declararlas, pedirlas por teclado, 
	usar el ciclo do while, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa inicia el ciclo while, despues pide como entrada 1 variable de tipo int (valor del numero),
	El programa pide cualquier cantidad de numeros y los sume, el programa terminara de leer
	numeros cuando se introduce un 0. 
	*/


#include<stdio.h>

int main(){
	//Variables
	float numero=1, suma=0; //variable con decimal
	int i=1; //variable numero entero
	//cilclo do while
	do { //Ciclo que se repta al menos una vez
		//Entrada
		printf("Introduce el valor numero %d: ",i);//imrpime mensaje
		scanf("%f",&numero);//lee el numero insertado por el teclado
		//Proceso
		suma=suma+numero;//Ecuacion
		i++;//contador
	}while(numero!=0);//condicion que numero sea diferente de 0
	//Salida
	printf("La suma es %.2f",suma);//imrpime la salida de la suma
	
	return 0;
}
