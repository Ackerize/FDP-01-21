#include <iostream>
#include <math.h>

using namespace std;

float coseno(float, int);
int factorial(int);

int main(){
    float x;
    int n;

    cout << "Ingrese el valor de x: "; cin >> x;
    cout << "Ingrese la cantidad de terminos a sumar: "; cin >> n;
    cout << "El coseno de " << x << " es: " << coseno(x, n) << endl;
    cout << "El valor real es " << cos(x) << endl;
    return 0;
}

float coseno(float x, int n){
    float resultado = 0;
    for (int k = 0; k < n; k++)
    {
        resultado += (pow(-1, k) * pow(x, 2*k)) / factorial(2*k);
    }
    return resultado;
}

int factorial(int n){
    int resultado = 1;
    if(n == 0 || n == 1){
        return 1;
    }
    for (int i = 1; i <= n; i++)
    {
        resultado *= i;
        // resultado = resultado * i;
    }
    return resultado;
}