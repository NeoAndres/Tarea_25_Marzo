#include <iostream>
#include <string> // Necesario para trabajar con strings
using namespace std;

float c_cacao, m, p, t, pv, costo;
int n_unidades;
string tpro;

int main() {
    // Solicitar el tipo de producto
    cout << "Tipo de producto <jumbo> <blanca> <dulce>: ";
    getline(cin, tpro); // Alfanumérico, acepta espacios

    // Solicitar cantidad de cacao
    cout << "Cantidad de cacao (kg): ";
    cin >> c_cacao;

    // Limpiar el buffer de entrada para evitar problemas con getline después de cin
    cin.ignore();

    // Cálculos dependiendo del tipo de producto
    if (tpro == "jumbo") {
        m = c_cacao * (0.015 + 0.025 + 0.1 + 1);
        p = 10200 * c_cacao;
        t = 300 * c_cacao;
        n_unidades = static_cast<int>(75 * c_cacao);
    } else if (tpro == "blanca") {
        m = c_cacao * 0.0035 + c_cacao;
        p = 8100 * c_cacao;
        t = 270 * c_cacao;
        n_unidades = static_cast<int>(c_cacao * 4 / 10);
    } else if (tpro == "dulce") {
        m = c_cacao * 0.0035 + c_cacao * 0.05 + c_cacao;
        p = 8800 * c_cacao;
        t = 280 * c_cacao;
        n_unidades = static_cast<int>(c_cacao * 5 / 10);
    }

    // Calcular costo
    costo = m * p / t;

    // Calcular precio de venta dependiendo del costo
    if (tpro == "jumbo" && costo < 1300) {
        pv = costo + 2000;
    } else if (tpro == "jumbo" && costo >= 1300) {
        pv = costo + 1000;
    } else if (tpro == "blanca" && costo < 2500) {
        pv = costo + 1500;
    } else if (tpro == "blanca" && costo >= 2500) {
        pv = costo + 500;
    } else if (tpro == "dulce" && costo < 3000) {
        pv = costo + 3000;
    } else if (tpro == "dulce" && costo >= 3000) {
        pv = costo + 2000;
    }

    // Imprimir los resultados
    cout << "Costo: " << costo << endl;
    cout << "Unidades: " << n_unidades << endl;
    cout << "Precio de venta: " << pv << endl;

    return 0;
}

