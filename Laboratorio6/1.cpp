#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Ingrese la cantidad de letras: ";
    cin >> n; // 5

    int contador = 0;
    char c;

    for(int i = 0; i < n; i++){
        cout << "Ingrese la letra " << i + 1 << ": ";
        cin >> c;

        switch (c)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
    	    contador++;
            break;
        default:
            break;
        }
    }

    cout << "El usuario ingreso " << contador << " vocales" << endl;

    return 0;
}