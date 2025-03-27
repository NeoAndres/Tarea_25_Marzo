#include <iostream>
using namespace std;

int main() {
    int fruta, cantidad;
    float precio_unitario, costo_total;

    // Solicitar la fruta
    cout << "Seleccione una fruta (1: Manzana, 2: Platano, 3: Naranja): ";
    cin >> fruta;

    // Solicitar la cantidad de la fruta
    cout << "Ingrese la cantidad de frutas: ";
    cin >> cantidad;

    // Establecer el precio unitario usando switch
    switch (fruta) {
        case 1: // Manzana
            precio_unitario = 2.5;
            break;
        case 2: // Plátano
            precio_unitario = 1.8;
            break;
        case 3: // Naranja
            precio_unitario = 3.0;
            break;
        default:
            cout << "Opción no válida." << endl;
            return 1; // Termina el programa si la opción no es válida
    }

    // Calcular el costo total
    costo_total = precio_unitario * cantidad;

    // Mostrar el costo total
    cout << "El costo total es: $" << costo_total << endl;

    return 0;
}

