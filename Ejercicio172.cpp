/*Realice un programa que permita realizar las siguientes operaciones con dos valores: suma, resta, multiplicacion division, calculo de la raiz cuadrada, potencia al cuadrado y potencia al cubo
el programa debe permitir al usuario repetir la ejecucion si lo desea*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float valor1, valor2, resultado;
	char opcion, continuar;
	
	do{
	cout<< "Que opcion desea elegir?" << endl;
	cout <<"|1. suma|2. resta|3. multiplicar|4. divicion|5. riaz cuadrada|6. potencia al cuadrado|7. potencia al cubo|: "; cin>> opcion;
	switch(opcion){
		case '1':
		cout<< "ingrese el valor 1: ";
		cin >> valor1;
			cout<< "ingrese el valor 2: ";
		cin >> valor2;
		resultado = valor1 + valor2;
		cout<< "el resultado es: "<< resultado << endl;
		break;
		
		case '2':
		cout<< "ingrese el valor 1: ";
		cin >> valor1;
			cout<< "ingrese el valor 2: ";
		cin >> valor2;
		resultado = valor1 - valor2;
		cout<< "el resultado es: "<< resultado << endl;
		break;
		
		case '3':
		cout<< "ingrese el valor 1: ";
		cin >> valor1;
			cout<< "ingrese el valor 2: ";
		cin >> valor2;
		resultado = valor1 * valor2;
		cout<< "el resultado es: "<< resultado << endl;
		break;
		
		case '4':
		cout<< "ingrese el valor 1: ";
		cin >> valor1;
			cout<< "ingrese el valor 2: ";
			cin >> valor2;
				if(valor2 == 0){
				cout << "el valor es invalido";
		}else if()){
		resultado = valor1 / valor2;
		cout<< "el resultado es: "<< resultado << endl;
		}
		break;
		
		case '5':
		cout<< "ingrese el valor: ";
		cin >> valor1;
		if(valor1 <0){
			cout << "valor invalido";
		}
		resultado = sqrt(valor1);
		cout<< "el resultado es: "<< resultado << endl;
		break;
		
		case '6':
		cout<< "ingrese el valor: ";
		cin >> valor1;
		resultado = valor1 * valor1;
		cout<< "el resultado es: "<< resultado << endl;
		break;
		
		case '7':
		cout<< "ingrese el valor: ";
		cin >> valor1;
		resultado = valor1 * valor1 * valor1;
		cout<< "el resultado es: "<< resultado << endl;
		break;
	}
	
	cout<< "desea continuar?(s/n): "; cin>> continuar;
	}while(continuar == 's');
return 0;
}