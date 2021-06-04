#include <iostream>

using namespace std;

int main(){
    int numero1; // 1, 2, 3
    int numero2;
    int suma;
    int resta;
    int producto;
    float division;  // 1.23, 1.03

    int cociente;
    int residuo;


    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    // Se calcula la suma de los dos numeros
    suma = numero1 + numero2;

    cout << "La suma es " << suma << endl;

    resta = numero1 - numero2;

    cout << "La resta es " << resta << endl;

    producto = numero1 * numero2;

    cout << "El producto es " << producto << endl;

    division = numero1 / (float) numero2; 

    cout << "La division es " << division << endl;

    cociente = numero1 / numero2;

    cout << "El cociente es " << cociente << endl;

    residuo = numero1 % numero2; //

    cout << "El residuo es " << residuo << endl;

    return 0;
}