#include <iostream>

using namespace std;

int main(){
    int a, b;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    // [a, b]
    for (int numero = a; numero <= b; numero++)
    {
        if(numero%2 == 0){
            cout << numero << ", ";
        }
    }
    
    cout << endl;
    
    return 0;
}