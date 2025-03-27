#include <iostream>
using namespace std;

    // Inicio
 int main() {
    // Declarar variables
    float  parcialUno, parcialDos, parcialTres, examenFinal, trabajoFinal, notaFinal;
    
    // Empezar a imprimir en la consola
    cout << "Ingresa la nota del parcialUno: ";
    cin >> parcialUno;
    
    cout << "Ingresa la nota del parcialDos: ";
    cin >> parcialDos;
    
    cout << "Ingresa la nota del parciaTres: ";
    cin >> parcialTres;
    
    cout << "Ingresa la nota del examen final: ";
    cin >> examenFinal;
    
    cout << "ingresa la nota del trabajoFina: ";
    cin >> trabajoFinal;
    // Proceso
    notaFinal = ( ( (parcialUno+ parcialDos+ parcialTres ) / 3) * 0.55) + (0.30 * examenFinal) + (0.15* trabajoFinal);
    
    
    // Imprimir
    cout << " La nota final es: " << notaFinal;

    return 0; //Fin
}

