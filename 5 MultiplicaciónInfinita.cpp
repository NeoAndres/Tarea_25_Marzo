#include <iostream>
using namespace std;
//Haga un programa que calcule 
int numero;
main (){
int i = 1;
int res;
	
	cout << "Indique el numero a multiplicar: ";
	cin >> numero;

	while (i < 20)	{
		res = numero*i;
		cout << "El numero es: " << res << endl;
		i++;
	}
	
	
	return 0;
}
