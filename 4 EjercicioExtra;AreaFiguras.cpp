#include <iostream>
using namespace std;
int base, altura, area;
string tipoFigura;

void calcularArea(){
	if (tipoFigura == "Cuadrado"){
		area = base*base;
	} else if (tipoFigura == "Rectangulo"){
		area = base*altura;
	} else if (tipoFigura == "Triangulo"){
		area = (base*altura)/2;
	} else {
		cout << "Ud ha ingresado un valor para <tipoFigura> de forma incorrecta";
		cout << "Revise y corrija";
	}
}

int main(){
	cout << "Ingrese el tipo de figura al que le desea calclar el area: (Cuadrado-Rectangulo-Triagulo): " << endl;
	cin >> tipoFigura;	
	
	cout << "ingrese la altura: " << endl;
	cin >> altura;
	
	cout << "ingrese la base: " << endl;
	cin >> base;
	
	calcularArea(); // Invocar el metodo en main

	cout << "el area del " << tipoFigura << " es de: " << area;
	
return 0;

}


	

