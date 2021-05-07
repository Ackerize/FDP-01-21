#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a, b, c;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    float D = pow(b, 2) - (4*a*c);

    if(D > 0){
        float x1 = (-b + sqrt(D))/(2*a);
        float x2 = (-b - sqrt(D))/(2*a);

        cout << "x1: " << x1 << " x2: " << x2 << endl;

    }else if( D == 0){

        float x = (-b + sqrt(D))/(2*a);

        cout << "X: " << x << endl;

    }else if(D < 0){
        cout << "No tiene solucion real" << endl;
    }

    return 0;
}