#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float sueldo;
    cout << "Ingrese el sueldo: ";
    cin >> sueldo;

    cout << "-- MENU --" << endl;
    cout << "1. Renta (10%)" << endl;
    cout << "2. AFP (6.25%)" << endl;
    cout << "3. ISSS (2%)" << endl;
    cout << "Ingrese la opcion que prefiera: ";
    int opcion;
    cin >> opcion;

    switch (opcion)
    {
        case 1:
            cout << "El aporte de renta es: $" << sueldo * (0.1) << endl;
            break;
        case 2:
            cout << "El aporte de AFP es: $" << sueldo * (0.0625) << endl;
            break;
        case 3:
            cout << "El aporte de ISSS es: $" << sueldo * (0.02) << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }
    return 0;
}