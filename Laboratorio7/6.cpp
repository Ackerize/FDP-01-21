#include <iostream>

using namespace std;

bool estaDentro(float, float, float);

int main(){
    float a, b, x;

    cout << "Ingrese el valor de a: "; cin >> a;
    cout << "Ingrese el valor de b: "; cin >> b;
    cout << "Ingrese el valor de x: "; cin >> x;

    bool resultado = estaDentro(a, b, x);

    if(resultado == true){
        cout << "El valor " << x << " pertenece al intervalo [" << a << "," << b << "]" << endl;
    }else{
        cout << "El valor " << x << " no pertenece al intervalo [" << a << "," << b << "]" << endl;
    }
    return 0;
}

bool estaDentro(float a, float b, float x){
    //(a, b)
    return (x >= a && x <= b);
}


