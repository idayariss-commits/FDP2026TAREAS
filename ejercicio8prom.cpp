#include <iostream>
using namespace std;

int main() {

    float nota, suma = 0, promedio;
    int cantidad = 0;

    cout << "Ingrese las calificaciones" << endl;
    cout << "Ingrese un numero negativo para terminar" << endl;

    while(true) {

        cout << "Calificacion: ";
        cin >> nota;

        if(nota < 0) {
            break;
        }

        suma = suma + nota;
        cantidad++;
    }

    promedio = suma / cantidad;

    cout << "Promedio: " << promedio << endl;

    return 0;
}