#include <iostream>
using namespace std;

int main() {
	// Se declara variable de apoyo para el switch
    int num;
    // Solicitar el número del día
    cout << "Digite un numero [1, 7]: " << endl;
    cin >> num;
    
    // Usar switch para identificar el día de la semana
    switch (num) {
        case 1: cout << "Equivale a Lunes" << endl;
        break;
        case 2: cout << "Equivale a Martes" << endl;
        break;
        case 3: cout << "Equivale a Miercoles" << endl;
        break;
        case 4: cout << "Equivale a Jueves" << endl;
        break;
        case 5: cout << "Equivale a Viernes" << endl;
        break;
        case 6: cout << "Equivale a Sabado" << endl;
        break;
        case 7: cout << "Equivale a Domingo" << endl;
        break;
        default: cout << "Error, digite un numero del 1 al 7" << endl;
    }
    return 0;
}

