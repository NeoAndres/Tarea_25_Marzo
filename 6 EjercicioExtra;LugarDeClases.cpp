/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Note:The template file will be copied to a new file. When you change the code of the template file you can create new file with this base code.
#include <iostream>

using namespace std;
string materia;
string diaSemana;

string lugarClaseLunes(string materia) {
	string codigoSalon;
	cout << "Digite la materia a la que desea ir <Calculo> <Matematicas discretas> <Intro area profesional>" << endl;
	cin >> materia;
	if (materia == "Calculo") {
		cout << "dirijase a el P17 - 203";
	} else if (materia == "Matematicas discretas") {
		cout << "dirijase a el P17 - 212";
	} else if (materia == "Intro area profesional") {
		cout << "dirijase a el P40 - 703";
	}
	return codigoSalon;
}

string lugarClaseMartes(string materia) {
	string codigoSalon;
	cout << "Digite la materia a la que desea ir <Lengua materna> <Humanidades> <Algoritmos>" << endl;
	cin >> materia;
	if (materia == "Lengua materna") {
		cout << "dirijase a el P40 - 705";
	} else if (materia == "Humanidades") {
		cout << "dirijase a el P19 - 203";
	} else if (materia == "Algoritmos") {
		cout << "dirijase a el P34 - 104";
	}
	return codigoSalon;
}

string lugarClaseMiercoles(string materia) {
	string codigoSalon;
	cout << "Digite la materia a la que desea ir <Calculo> <Matematicas discretas> <Algoritmos>" << endl;
	cin >> materia;
	if (materia == "Calculo") {
		cout << "dirijase a el P17 - 204";
	} else if (materia == "Matematicas discretas") {
		cout << "dirijase a el P13 - 118";
	} else if (materia == "Algoritmos") {
		cout << "dirijase a el P34 - 105";
	}
	return codigoSalon;
}

string lugarClaseJueves(string materia) {
	string codigoSalon;
	cout << "Digite la materia a la que desea ir <Lengua materna> <Humanidades> <Algoritmos>" << endl;
	cin >> materia;
	if (materia == "Lengua materna") {
		cout << "dirijase a el P40 - 704";
	} else if (materia == "Humanidades") {
		cout << "dirijase a el P19 - 203";
	} else if (materia == "Algoritmos") {
		cout << "dirijase a el P13 - 303";
	}
	return codigoSalon;
}

int main() {
	cout << "Este programa te dira que dia a que lugar tienes que ir." << endl;
	cout << "Solo debes digitar el dia y la materia. " << endl;
	cout << "Digite que dia es hoy Lunes, Martes, Miercoles, Jueves" << endl;
	cin >> diaSemana;

	if (diaSemana == "Lunes") {
		lugarClaseLunes(materia);
	} else if (diaSemana == "Martes") {
		lugarClaseMartes(materia);
	} else if (diaSemana == "Miercoles") {
		lugarClaseMiercoles(materia);
	} else if (diaSemana == "Jueves") {
		lugarClaseJueves(materia);
	}
	return 0;

}