#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    float suma = 0; // acumulador 
    float numero;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero "<< i + 1 << ": ";
        cin >> numero;

        suma += numero;
    }

    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << suma / n << endl;
    
    return 0;
}