#include <iostream>

using namespace std;

void conteoVocalesConsonantes(int&, int&, int, char[]); 

int main(){
    
    int n;
    cout << "Ingrese la cantidad de caracteres de la palabra: "; 
    cin >> n;

    char palabra[n];

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    int vocales = 0, consonantes = 0;

    conteoVocalesConsonantes(vocales, consonantes, n, palabra);

    cout << "La cantidad de vocales presentes en la palabra es: " << vocales << endl; 
    cout << "La cantidad de consonantes presentes en la palabra es: " << consonantes << endl;

    return 0;
}

void conteoVocalesConsonantes(int &vocales, int &consonantes, int n, char cadena[]){
    for(int i=0; i<n; i++){
        switch (cadena[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            vocales++;
            break;
        default:
            consonantes++;
            break;
        }
    }
}