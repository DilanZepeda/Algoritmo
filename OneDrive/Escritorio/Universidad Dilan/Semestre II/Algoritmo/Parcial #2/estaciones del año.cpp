#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un numero del 1 al 4: ";
    cin >> numero;

    switch (numero) {
        case 1:
            cout << "La estacion correspondiente es: Primavera" << endl;
            break;
        case 2:
            cout << "La estacion correspondiente es: Verano" << endl;
            break;
        case 3:
            cout << "La estacion correspondiente es: Otoño" << endl;
            break;
        case 4:
            cout << "La estacion correspondiente es: Invierno" << endl;
            break;
        default:
            cout << "El numero ingresado no es valido. Debes ingresar un numero entre 1 y 4." << endl;
    }

    return 0;
}

