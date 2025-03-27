// procedimiento no tiene argumentos
// funcion tiene argumentos
#include <iostream>
using namespace std;
int numero;
// Función procedural
void par(){ 
	if(numero%2 == 0){
		cout << "El numero es par";
	} else 
		cout << "El numero es impar";
}

// Función principal
int main() {
	cout << "digite un numero: ";
	cin >> numero;
	
	par(); //llamar al metodo sin variables
	
    return 0;
}
