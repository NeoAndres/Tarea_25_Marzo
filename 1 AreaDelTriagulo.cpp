#include <iostream>
using namespace std;

    // Inicio
 int main() {
    // Declarar variables
    float base, altura, area;
    
    // Empezar a imprimir en la consola
    cout << "Ingresa la base del triángulo: ";
    cin >> base;
    
    cout << "Ingresa la altura del triángulo: ";
    cin >> altura;
    
    // Proceso
    area = (base * altura) / 2;
    
    // Imprimir
    cout << "El área del triángulo es: " << area << endl;

    return 0; //Fin
}

