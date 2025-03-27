#include <iostream>
using namespace std;

// Funcion para calcular el factorial
int factorial(int numero) {
    int factorial = 1;
    int i = 1;
    while (i <= numero) {
        factorial *= i;
        i++;
    }
    return factorial;
}

// Funcion para calcular la combinatoria
int combinatoria(int m, int n) {
    // Verificamos que m sea mayor o igual a n
    if (m < n || n < 0) {
        cout << "Los valores de m y n no son validos para la combinatoria. Asegurate de que m >= n y n >= 0." << endl;
        return -1;  // Indicamos que hubo un error
    }
    // C(m,n) = (m!)/((n!)*(m-n)!), formula
    return factorial(m) / (factorial(n) * factorial(m - n));
}

int main() {
	// Declaramos variables
    int numero;
    int m, n;
    int resultado;

    // Pedimos al usuario que ingrese un numero para calcular su factorial
    cout << "Introduce un numero para calcular su factorial: ";
    cin >> numero;

    // Calculamos y mostramos el factorial
    cout << "El factorial del numero " << numero << " es: " << factorial(numero) << endl;

    // Informamos que vamos a hacer el calculo de combinaciones
    cout << "Ahora calcularemos una combinacion" << endl;

    // Pedimos al usuario que digite dos numeros
    cout << "Introduce el numero total de elementos disponibles (m): ";
    cin >> m;
    cout << "Introduce el numero total de elementos a seleccionar (n): ";
    cin >> n;

    // Calculamos y mostramos la combinatoria de casos
    resultado = combinatoria(m, n);
    
    // Mostramos el resultado
	cout << "La combinacion de " << n << " elementos de un conjunto de "<< m << " son: " << resultado << endl;
	
	// Fin del programa
    return 0;
}

