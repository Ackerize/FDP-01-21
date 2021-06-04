#include <iostream>

using namespace std;

int coordenadas(float, float);

int main(){
    float x, y;
    cout << "Ingrese el valor de x: "; cin >> x;
    cout << "Ingrese el valor de y: "; cin >> y;

    cout << "Las coordenadas (" << x << "," << y << ") pertenecen al cuadrante #" << coordenadas(x, y) << endl;

    //nombreFuncion();
    //nombreFuncion(parametro1, parametro2, parametro3);

    return 0;
}

int coordenadas(float x, float y){
    if(x == 0 && y == 0){
        return 0;
    }else if(x == 0 || y == 0){
        return 5;
    }else{
       if(x > 0 && y > 0){
           return 1;
       }else if(x < 0 && y > 0){
           return 2;
       }else if(x < 0 && y < 0){
           return 3;
       }else if(x > 0 && y < 0){
           return 4;
       }
    }
}

