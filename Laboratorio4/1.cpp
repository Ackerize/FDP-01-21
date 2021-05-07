#include <iostream>

using namespace std;

int main(){
    cout << "-- MENU --" << endl;
    cout << "1. Sumar 2 numeros" << endl;
    cout << "2. Restar 2 numeros" << endl;
    cout << "3. Multiplicar 2 numeros" << endl;
    cout << "4. Dividir 2 numeros" << endl;
    cout << "Ingrese la opcion que prefiera: ";
    int opcion;
    cin >> opcion;

    float numero1, numero2;
    cout << "Ingrese el numero 1: ";
    cin >> numero1;
    cout << "Ingrese el numero 2: ";
    cin >> numero2;

    if( opcion == 1){
        cout << "La suma es: " << numero1 + numero2 << endl;
    }else if( opcion == 2){
        cout << "La resta es: " << numero1 - numero2 << endl;
    }else if( opcion == 3){
        cout << "El producto es: " << numero1 * numero2 << endl;
    }else if( opcion == 4){
        if(numero2 == 0){
            cout << "El divisor no puede ser 0" << endl;
        }else {
            cout << "La division es: " << numero1 / numero2 << endl;
        }
    }

    return 0;
}