#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float sueldo;

    cout << "Ingrese el sueldo: ";
    cin >> sueldo;

    if( sueldo < 1000){
        sueldo = sueldo + (sueldo * 0.15);
        cout << "El nuevo sueldo luego de aplicarle el 15% de aumento es: $" << sueldo << endl;
    }else{
        sueldo = sueldo + (sueldo * 0.12);
        cout << "El nuevo sueldo luego de aplicarle el 15% de aumento es: $" << sueldo << endl;
    }

    return 0;
}