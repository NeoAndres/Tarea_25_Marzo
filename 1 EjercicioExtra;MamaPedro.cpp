#include <iostream>
using namespace std;

    // Inicio
 int main() {
    // Declarar variables
    int  edadPedro, edadAlberto, edadAnna, edadMama;
    
    // Empezar a imprimir en la consola
    cout << "Ingresa la edad de Pedro: ";
    cin >> edadPedro;
    
    // Proceso
    edadAlberto = (edadPedro * 2/3);
    edadAnna = (edadPedro * 4/3);
    edadMama = edadAlberto+edadPedro+edadAnna ;
    
    
    // Imprimir
    cout << "La edad de Pedro es: " << edadPedro << endl;
    cout << "La edad de Alberto es: " << edadAlberto << endl;
    cout << "La edad de Anna es: " << edadAnna << endl;
    cout << "La edad de la mama de Pedro es: " << edadMama << endl;

    return 0; //Fin
}

