#include <iostream>
#include <math.h>

using namespace std;

int main(){
    cout << "-- MENU DE AREAS --" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Rectangulo" << endl;
    cout << "4. Triangulo" << endl;
    cout << "Ingrese la opcion que prefiera: ";
    int opcion;
    cin >> opcion;

    float area = 0, radio, lado, base, altura;

    switch (opcion)
    {
        case 1:
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;

            area = M_PI*pow(radio, 2);
            cout << "El area del circulo es: " << area << endl;
            break;
        case 2:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;

            area = pow(lado, 2);
            cout << "El area del cuadrado es: " << area << endl;
            break;
        case 3:
            cout << "Ingrese la base del rectangulo: ";
            cin >> base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura;

            area = base * altura;

            cout << "El area del rectangulo es: " << area << endl;
            break;
        case 4:
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;

            area = (base*altura)/2;

            cout << "El area del triangulo es: " << area << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }
    return 0;
}