#include <iostream>
using namespace std;

    // Inicio
 int main() {
    // Declarar variables
    float base, altura, area;
    
    // Empezar a imprimir en la consola
    cout << "Ingresa la base del tri�ngulo: ";
    cin >> base;
    
    cout << "Ingresa la altura del tri�ngulo: ";
    cin >> altura;
    
    // Proceso
    area = (base * altura) / 2;
    
    // Imprimir
    cout << "El �rea del tri�ngulo es: " << area << endl;

    return 0; //Fin
}

