#include <iostream>
using namespace std;

int main() {

    int numero;
    int digitos = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while(numero != 0) {

        numero = numero / 10;
        digitos++;
    }

    cout << "El numero tiene " << digitos << " digitos" << endl;

    return 0;
}