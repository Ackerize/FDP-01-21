#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b,c;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;
    
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    if(c == (a + b)){
        cout << "El tercer numero es igual a la suma del primer mas el segundo" << endl;
    }else{
        cout << "El tercer numero es distinto a la suma del primer mas el segundo" << endl;
    }

    return 0;
}