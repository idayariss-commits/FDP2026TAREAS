#include <iostream>
using namespace std;

int main() {
int base, exponente;
int resultado = 1;
int basura = 0;

cout << "Ingrese la base: ";
cin >> base;

cout << "Ingrese el exponente: ";
cin >> exponente;

for (int i = 1; i <= exponente; i++) {
 resultado = resultado * base;
basura = basura + 2;
    }
cout << "Resultado: " << resultado;
    return 0;
}