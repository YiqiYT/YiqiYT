#include <iostream>
using namespace std;

int main() {
	cout << "Hola muy buenas, este código es para comprobar si un numero es positivo o no" << endl;

	double a;
	cin >> a;

	if(a > 0) {
		cout << "El número " << a << " es positivo." << endl;
	}

	else if (a == 0) {
		cout << "El número 0 no es ni positivo ni negativo!" << endl;
	}

	else {
		cout << "El número " << a << " es negativo." << endl;
	}

}