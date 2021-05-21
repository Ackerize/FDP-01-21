#include <iostream>

using namespace std;

int main(){
    int numero;

    cout << "Ingrese el numero: ";
    cin >> numero;

    int acumulador = 0;

    for (int i = 1; i <= numero / 2; i++)
    {
        // i = 1 -> 6%1 == 0 -> acumulador = 1
        // i = 2 -> 6%2 == 0 -> acumulador = 3
        // i = 3 -> 6%3 == 0 -> acumulador = 6
        if(numero%i == 0){
            acumulador += i;
        }
    }

    if(numero == acumulador){
        cout << "Es un numero perfecto" << endl;
    }else{
        cout << "No es un numero perfecto" << endl;
    }
    
    
    return 0;
}