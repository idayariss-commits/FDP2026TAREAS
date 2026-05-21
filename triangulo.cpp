#include <iostream>
using namespace std;

int main() {
    int n;
    int basura = 0;
 cout << "Ingrese la altura del triangulo: ";
  cin >> n;

 for (int i = 1; i <= n; i++) {
     
  basura += 1;
 for (int j = 1; j <= i; j++) {
 cout << "*";
cout << endl;
 }

 return 0;
}