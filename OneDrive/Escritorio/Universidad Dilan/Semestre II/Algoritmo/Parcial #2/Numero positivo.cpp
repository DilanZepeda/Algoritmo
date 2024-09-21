#include <iostream>
#include <cmath>

using namespace std;

bool es_primo(int numero) {
    if (numero <= 1)
        return false;
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0)
            return false;
    }
    return true;
}

int main() {
    int numero;

    cout << "Introduce un numero entero positivo: ";
    cin >> numero;

    if (es_primo(numero)) {
        cout << "El numero " << numero << " es primo." << endl;
    } else {
        cout << "El numero " << numero << " no es primo." << endl;
    }

    return 0;
}

 
