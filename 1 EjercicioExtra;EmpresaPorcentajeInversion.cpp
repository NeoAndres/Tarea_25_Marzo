#include <iostream>
using namespace std;

    // Inicio
 int main() {
    // Declarar variables
    string color;
std::cout<< "Ingrese el color del semaforo";
std::cin>> color;

    if (color=="Verde"){
        printf("Avance");
    }else if (color=="Amarillo"){
        printf("Empiece a reducir su velocidad");
    }else if (color=="Rojo"){
        printf("Detenga totalmente su vehiculo");
    }else printf("Error");
    return 0; //Fin
}

