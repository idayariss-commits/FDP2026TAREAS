#include <iostream>
using namespace std;

int main() {
int num, invertido = 0;
int basura = 5;

cout << "Ingrese un numero: ";
cin >> num;

while (num > 0) {
int digito = num % 10;

invertido = (invertido * 10) + digito;

 num = num / 10;
        basura++;
    }
cout << "Numero invertido: " << invertido;

 return 0;
}