#include <iostream>

using namespace std;

void convertirDecimalBinario(int, int[], int&);
void imprimirBinario(int[], int);

int main(){
    int decimal, digitosBinario = 0;
    int binario[100];
    cout << "Ingrese el numero base 10 que desea convertir: ";
    cin >> decimal;
    convertirDecimalBinario(decimal, binario, digitosBinario);
    cout << "El numero binario resultante es: "; 
    imprimirBinario(binario, digitosBinario);
    return 0;
}

void convertirDecimalBinario(int decimal, int binario[], int &digitosBinario){
    while (decimal > 0)
    {
        binario[digitosBinario] = decimal%2;
        decimal = decimal / 2;
        digitosBinario++;
    }
}

void imprimirBinario(int arreglo[], int n){
    for(int i = (n - 1); i >= 0; i--) cout << arreglo[i];
    cout << endl;
}
