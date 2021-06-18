#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void llenarArreglo(int[], int);
void llenarArregloAleatorio(int[], int);
int sumarArreglo(int[], int);
float promedioArreglo(int[], int);
void conteoArreglo(int[], int, int&, int&, int&);
void cambioArreglo(int[], int);
void mostrarArreglo(int[], int);

int main(){
    srand(time(NULL));
    int n, opcion = 0, positivos = 0, negativos = 0, ceros = 0;;
    cout << "Introduzca cuantos valores tendra el arreglo: ";
    cin >> n;
    int arreglo[n];
    do
    {
        cout << "--- MENU ---" << endl;
        cout << "1. Llena arreglo" << endl;
        cout << "2. Llena arreglo con datos aleatorios" << endl;
        cout << "3. Sumar los elementos del arreglo" << endl;
        cout << "4. Promedio de los elementos del arreglo" << endl;
        cout << "5. Conteo de negativos, ceros y positivos" << endl;
        cout << "6. Cambio de valores en el arreglo" << endl;
        cout << "7. Mostrar arreglo" << endl;
        cout << "8. Salir" << endl;
        cout << "Introduzca la opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            llenarArreglo(arreglo, n);
            break;
        case 2:
            llenarArregloAleatorio(arreglo, n);
            break;
        case 3:
            cout << "La suma de todos los elementos es " << sumarArreglo(arreglo, n) << endl;
            break;
        case 4:
            cout << "El promedio de todos los elementos es " << promedioArreglo(arreglo, n) << endl;
            break;
        case 5:
            positivos = 0, negativos = 0, ceros = 0; 
            conteoArreglo(arreglo, n, negativos, ceros, positivos);
            cout << "La cantidad de negativos en el arreglo es: " << negativos << endl;
            cout << "La cantidad de ceros en el arreglo es: " << ceros << endl;
            cout << "La cantidad de positivos en el arreglo es: " << positivos << endl;
            break;
        case 6:
            cambioArreglo(arreglo, n);
            break;
        case 7:
            mostrarArreglo(arreglo, n);
            break;
        case 8:
            cout << "Finalizando programa" << endl;
            break;
        default:
            cout << "Introduzca una opcion valida" << endl;
            break;
        }
    } while (opcion != 8);
    

    return 0;
}

void llenarArreglo(int arreglo[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento [" << i + 1 << "]: ";
        cin >> arreglo[i];
    }
}

void llenarArregloAleatorio(int arreglo[], int n){
    int a, b;
    cout << "Introduzca el extremo inferior del rango: ";
    cin >> a;
    cout << "Introduzca el extremo superior del rango: ";
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        arreglo[i] = a + rand() % (b + 1 - a); 
    }
}

int sumarArreglo(int arreglo[], int n){
    int resultado = 0;

    for (int i = 0; i < n; i++)
    {
        resultado = resultado + arreglo[i];
    }
    return resultado;
}

float promedioArreglo(int arreglo[], int n){
    int suma = sumarArreglo(arreglo, n);
    float resultado = suma / (float) n;

    return resultado;
}

void conteoArreglo(int arreglo[], int n, int &negativos, int &ceros, int &positivos){
    for (int i = 0; i < n; i++){
        int elemento = arreglo[i];

        if(elemento > 0) positivos++;
        else if(elemento < 0) negativos++;
        else ceros++;
    }
}

void cambioArreglo(int arreglo[], int n){
    for (int i = 0; i < n; i++){
        int elemento = arreglo[i];
        if(elemento < 0) arreglo[i] = 0;
        else if (elemento % 2 == 0) arreglo[i] = 2;
        else arreglo[i] = 1;
    }
}

void mostrarArreglo(int arreglo[], int n){
    for (int i = 0; i < n; i++) cout << arreglo[i] << " ";
    cout << endl;
}