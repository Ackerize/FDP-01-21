#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;

    char letraAux = (char) toupper(letra);


    switch (letraAux)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Es una vocal" << endl;
            break;
        default:
            cout << "No es una vocal" << endl;
            break;
    }
    return 0;
}