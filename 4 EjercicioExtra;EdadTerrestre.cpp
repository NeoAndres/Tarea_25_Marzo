// #include "space_age.h"
#include <iostream>
#include <iomanip>  // Para setprecision
using namespace std;

// namespace space_age {
// Planeta      Años          Segundos
// Mercurio  0.2408467			 ?
// Venus     0.61519726			 ?
// Tierra    1.0           31.557.600 segs
// Marte     1.8808158			 ?
// Jupiter   11.862615			 ?
// Saturno   29.447498			 ?
// Urano     84.016846			 ?
// Neptuno   164.79132			 ?
    
// En este codigo hallo los segundos de cada planeta
double calcularSegundos(double anios){
    return anios * 31557600;
}

// En este codigo, segun la edad terrestre en cada planeta
// La edad de una persona en tal planeta
double calcularEdad(double segundosTerrestresVivo, double segundosPorAnio){
	return segundosTerrestresVivo / segundosPorAnio;
	
}

// Funcion main()
int main() {
    string planeta;
    double anios, segundos, segundosVivo;

    cout << "Digite el planeta del sistema solar: " << endl;
    cin >> planeta;
    
    cout << "Cuanto anios terrestres en segundos lleva vivo? (Segundos): " << endl;
    cin >> segundosVivo;

    if (planeta == "Mercurio") {
        anios = 0.2408467;
    } else if (planeta == "Venus") {
        anios = 0.61519726;
    } else if (planeta == "Tierra") {
        anios = 1.0;
    } else if (planeta == "Marte") {
        anios = 1.8808158;
    } else if (planeta == "Jupiter") {
        anios = 11.862615;
    } else if (planeta == "Saturno") {
        anios = 29.447498;
    } else if (planeta == "Urano") {
        anios = 84.016846;
    } else if (planeta == "Neptuno") {
        anios = 164.79132;
    } else {
        cout << "Error: Planeta no válido." << endl;
    }
    cout << fixed << setprecision(5); // Fijamos 5 decimales
    cout << "Su planeta es: " << planeta << endl;
	cout << "1 anio en este planeta equivale a " << anios << " anios terrestres." << endl;
    cout << "1 anio en segundos en este planeta es: " << calcularSegundos(anios) << " segundos." << endl;
    
    segundos = calcularSegundos(anios);
    cout << "Ud tiene " << calcularEdad(segundosVivo,segundos) << " anios de edad !!!!" << endl;
    
    
	return 0;
}



