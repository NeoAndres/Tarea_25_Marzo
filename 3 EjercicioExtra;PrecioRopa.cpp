3 #include <iostream>
using namespace std;

int main() {
    int cantidad;
    string tipo_producto;
    float precio_base, precio_final;

    // Solicitar el tipo de producto
    cout << "Ingrese el tipo de producto <camisa> <pantalon> <zapatos>: ";
    cin >> tipo_producto;

    // Solicitar la cantidad de productos
    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;

    // Establecer el precio base según el tipo de producto
    if (tipo_producto == "camisa") {
        precio_base = 15.0;
    } else if (tipo_producto == "pantalon") {
        precio_base = 25.0;
    } else if (tipo_producto == "zapatos") {
        precio_base = 40.0;
    } else {
        cout << "Tipo de producto no válido." << endl;
        return 1; // Termina el programa si el tipo no es válido
    }

    // Calcular el precio final con base en la cantidad
    if (cantidad >= 10) {
        precio_final = precio_base * cantidad * 0.9; // 10% de descuento para compras grandes
    } else {
        precio_final = precio_base * cantidad;
    }

    // Mostrar el precio final
    cout << "El precio final es: $" << precio_final << endl;

    return 0;
}

