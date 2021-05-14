#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;

    if((int) letra >= 65 && (int) letra <= 90){
        cout << (char) (letra + 32) << endl;
        cout << (char) tolower(letra) << endl;
    }else if((int) letra >= 97 && (int) letra <= 122){
        cout << (char) (letra - 32) << endl;
        cout << (char) toupper(letra) << endl;
    }else{
        cout << "No es una letra" << endl;
    }


    return 0;
}