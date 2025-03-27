#include <iostream>
using namespace std;

// Declaramos variables
float numero1, numero2, numero3, numMayor;

// Funcion para calcular el factorial
float funcionMayor(float n1, float n2, float n3) {
	float numero;
	
	if (n1 > n2 && n1 > n3){
		numero = n1;
	} else if (n2 > n3 && n2 > n1){
		numero = n2;
	} else{ 
		numero = n3;
	}
	return numero;
}

int main() {

    // Pedimos al usuario que ingrese tres numeros para hallar el mayor 
    cout << "Introduce un numero: ";
    cin >> numero1;
    cout << "Introduce un numero: ";
    cin >> numero2;
    cout << "Introduce un numero: ";
    cin >> numero3;
    
    // Si todos lo numeros son diferentes, halle el mayor con la función y guarde el valor en numMayor
    if (numero1!=numero2 && numero2!=numero3 && numero1!=numero3){
    	numMayor = funcionMayor(numero1, numero2, numero3);
    	cout << "el numero mayor es: " << numMayor;
	} else {
		cout << "Error: Hay numeros iguales y no se podra hallar el mayor.";
	}

    return 0;
}

