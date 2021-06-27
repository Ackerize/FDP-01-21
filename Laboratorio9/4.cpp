#include <iostream>
#include <cstring>

using namespace std;

void codificarMurcielago(char[]);

int main(){
    char palabra[100];
    cout << "Ingrese la palabra que desea codificar: ";
    cin >> palabra;

    cout << "La palabra original es " << palabra << endl;
    codificarMurcielago(palabra);

    cout << "La palabra codificada es " << palabra << endl;

    return 0;
}

void codificarMurcielago(char palabra[]){
    int n = strlen(palabra);

    for(int i = 0; i < n; i++){
        switch (palabra[i])
        {
        case 'm':
            palabra[i] = '0';
            break;
        case 'u':
            palabra[i] = '1';
            break;
        case 'r':
            palabra[i] = '2';
            break;
        case 'c':
            palabra[i] = '3';
            break;
        case 'i':
            palabra[i] = '4';
            break;
        case 'e':
            palabra[i] = '5';
            break;
        case 'l':
            palabra[i] = '6';
            break;
        case 'a':
            palabra[i] = '7';
            break;
        case 'g':
            palabra[i] = '8';
            break;
        case 'o':
            palabra[i] = '9';
            break;
        default:
            break;
        }
    }
}

