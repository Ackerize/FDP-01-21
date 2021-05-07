#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int dia, mes;

    cout << "Ingrese el mes en formato de numero: ";
    cin >> mes;

    cout << "Ingrese el dia: ";
    cin >> dia;
    
    if(mes == 1){
        if(dia >= 20){
            cout << "Es capricornio" << endl;
        }
        else{
            cout << "No es capricornio" << endl;
        }
    }else if (mes == 'a' || mes == 'A'){
        if(dia <= 16){
           cout << "Es capricornio" << endl; 
        }else{
            cout << "No es capricornio" << endl;
        }
    }else{
        cout << "No es capricornio" << endl;
    }

    return 0;
}