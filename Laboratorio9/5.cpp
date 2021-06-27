#include <iostream>
#include <cstring>

using namespace std;

void jugarP(char[], char[]);

int main(){
    char palabra[100];
    char jugar[11];
    cout << "Ingrese una frase: ";
    cin.getline(palabra, 100);

    cout << "La frase original es " << palabra << endl;
    jugarP(palabra, jugar);
    cout << "La palabra con el juego 'p' es " << jugar << endl;

    return 0;
}

void jugarP(char arreglo[], char jugar[]){
    int n = strlen(arreglo), j = 0;
    for(int i = 0; i < n; i++){
        switch(arreglo[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                jugar[j] = arreglo[i];
                jugar[j+1] = 'p';
                jugar[j+2] = arreglo[i];  
                j += 3;            
                break;
            default: 
                jugar[j] = arreglo[i];
                j++;
                break;
        }
    }
}