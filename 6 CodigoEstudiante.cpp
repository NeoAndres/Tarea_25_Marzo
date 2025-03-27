#include <iostream>
using namespace std;

int cantidadEstudiantes;
int codigo, aprobados = 0, reprobados = 0;
float nota1, nota2, nota3, promedio, notaMaxima = 0, notaMenor = 5;

void notaEstudiante() {
    cout << "Digite la nota 1: ";
    cin >> nota1;

    cout << "Digite la nota 2: ";
    cin >> nota2;

    cout << "Digite la nota 3: ";
    cin >> nota3;
}

float promedioEstudiante() {
    return (nota1 + nota2 + nota3) / 3;
}

void codigoEstudiante() {
    for (int i = 1; i <= cantidadEstudiantes; i++) {
        codigo = i;
        cout << "El codigo es: " << codigo << endl;
        notaEstudiante();

        promedio = promedioEstudiante();
        cout << "La nota final del estudiante " << codigo << " es: " << promedio << endl;

        if (promedio >= 3.0) {
            aprobados++;
        } else {
            reprobados++;
        }

        // Verificar si es la nota más alta
        if (promedio > notaMaxima) {
            notaMaxima = promedio;
        } else if (promedio < notaMenor){
        	notaMenor = promedio;
        }
     
}
    cout << "\nEl numero total de aprobados es: " << aprobados << endl;
    cout << "El numero total de reprobados es: " << reprobados << endl;
    cout << "La nota final mas alta del grupo es: " << notaMaxima << endl;
    cout << "La nota final mas baja del grupo es: " << notaMenor << endl;

}

int main() {
    cout << "Digite el numero de estudiantes del grupo: ";
    cin >> cantidadEstudiantes;
    
    codigoEstudiante();

    return 0;
}
