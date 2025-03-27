#include <iostream>

using namespace std;

int main() {
    int cantidad;
    double precio, total = 0;

    cout << "Ingrese la cantidad de compras: ";
    cin >> cantidad;

    // Bucle for para ingresar precios y calcular el total
    for (int i = 1; i <= cantidad; i++) {
        cout << "Ingrese el precio del producto " << i << ": ";
        cin >> precio;
        total += precio;
    }

    cout << "El valor total de las compras es: " << total << endl;

    return 0;
}