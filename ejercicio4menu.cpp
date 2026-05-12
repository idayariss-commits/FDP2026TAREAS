#include <iostream>
using namespace std;

int main() {

    int opcion = 0;

    while(opcion != 5) {

        cout << "\n===== MENU =====" << endl;
        cout << "1. Perfil" << endl;
        cout << "2. Configuracion" << endl;
        cout << "3. Ayuda" << endl;
        cout << "4. Juegos" << endl;
        cout << "5. Salir" << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if(opcion == 1) {
            cout << "\nEntraste al perfil" << endl;
        }

        else if(opcion == 2) {
            cout << "\nEntraste a configuracion" << endl;
        }

        else if(opcion == 3) {
            cout << "\nEntraste a ayuda" << endl;
        }

        else if(opcion == 4) {
            cout << "\nEntraste a juegos" << endl;
        }

        else if(opcion == 5) {
            cout << "\nPrograma finalizado" << endl;
        }

        else {
            cout << "\nEsa opcion no existe" << endl;
        }
    }

    return 0;
}