#include <iostream>
#include <math.h>

using namespace std;


int main(){
    float x;
    float e = exp(1);

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "El resultado de e a la x es " << pow(e, x) << endl;
    cout << "El resultado de e a la x es " << exp(x) << endl;
    cout << "El resultado de logaritmo natural de x es " << log(x) << endl;
    cout << "El resultado de x a la 5 es " << pow(x, 5) << endl;
    cout << "El resultado de logaritmo base 10 de x es " << log10(x) << endl;
    cout << "El resultado de la raiz cuadrada de x es " << sqrt(x) << endl;
    cout << "El resultado de la raiz cuadrada de x es " << pow(x, 0.5) << endl;



    return 0;
}