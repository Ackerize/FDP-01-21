#include <iostream>

using namespace std;

bool esBisiesto(int);

int main(){
    int anio;

    cout << "Ingrese el anio: ";
    cin >> anio;
    bool resultado = esBisiesto(anio);
    if(resultado == true){
        cout << "El anio " << anio << " es bisiesto." << endl;
    }else{
        cout << "El anio " << anio << " no es bisiesto." << endl;
    }
    return 0;
}


bool esBisiesto(int anio){
    if(anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0)){
        return true;
    }else{
        return false;
    }
}
