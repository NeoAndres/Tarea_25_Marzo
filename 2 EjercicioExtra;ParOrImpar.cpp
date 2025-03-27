#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa un numero entero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "El numero " << num << " es par." << endl;
    } else {
        cout << "El numero " << num << " es impar." << endl;
    }

    return 0;
}
