#include <iostream>
#include <stdio.h>
using namespace std;

float cel, fah, kel, grados;
string TipoTemp;
float temperatura(float cel, float fah, float kel){
    if (TipoTemp=="celciusAfahrenheit"){
        return (5*(grados-32))/9;
    }else if (TipoTemp=="FahrenheitAkelvin"){
        return ((5*(grados-32))/9)+273.15;
    }else if (TipoTemp=="KelvinAcelcius"){
        return (grados+273.15);
    }else{
        cout << "Error";
    }
    return 1;
}
int main(int argc, char** argv) {
    cout << "Ingrese la temperatura que desea converitir <celciusAfahrenheit> <FahrenheitAkelvin> <KelvinAcelcius>: " << endl;
    cin >> TipoTemp;
    cout << "Ingrese los grados a convertir" << endl;
    cin >> grados;
    cout <<"Los grados son: " << temperatura(cel,fah,kel);

    return 0;
}