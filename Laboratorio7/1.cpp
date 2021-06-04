#include <iostream>

using namespace std;

int MCD(int, int);

int main(){
    int a, b;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "MCD: " << MCD(a, b) << endl;

    return 0;
}

int MCD(int a, int b){
    int aux, residuo;
    if(a < b){
        aux = b;
        b = a;
        a = aux;
    }
    while (b != 0)
    {
        residuo = a % b;
        a = b;
        b = residuo;
    }
    return a;
}