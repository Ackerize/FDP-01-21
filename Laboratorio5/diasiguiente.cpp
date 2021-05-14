#include <iostream>

using namespace std;

int main(void)
{
    int dd, mm, aa, ddSig, mmSig, aaSig;

    cout << endl;
    cout << "CALCULO DEL DIA SIGUIENTE" << endl << endl;

    cout << "Digite tres enteros correspondiente a dia, mes y anio: ";
    cin >> dd >> mm >> aa; // 31/3/2021 -> 1/4/2021

    switch(mm){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if(dd >= 1 && dd <= 30){
                ddSig = dd + 1; // 2
                mmSig = mm; // 3
                aaSig = aa; // 2021
                cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 2/3/2021
            }
            else
                if(dd == 31){
                    ddSig = 1; // 1
                    mmSig = mm + 1; // 3 + 1 -> 4
                    aaSig = aa; // 2021
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 1/4/2021
                }
                else
                    cout << "Dato no válido para día" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(dd >= 1 && dd <= 29){ // 29/9/2020
                ddSig = dd + 1; // 29 + 1 -> 30
                mmSig = mm; // 9
                aaSig = aa; // 2020
                cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 30/9/2020
        }
            else
                if(dd == 30){ // 30/9/2020
                    ddSig = 1; // 1
                    mmSig = mm + 1; //  9 + 1 -> 10
                    aaSig = aa; // 2020
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 1/10/2020
                }
                else
                    cout << "Dato no válido para día" << endl;
            break;                    
        case 12:
            if(dd >= 1 && dd <= 30){ // 29/12/2020
                ddSig = dd + 1; // 29 + 1 -> 30
                mmSig = mm; // 12
                aaSig = aa; // 2020
                cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 30/12/2020
            }
            else
                if(dd == 31){ // 31/12/2020
                    ddSig = 1; // 1
                    mmSig = 1; // 1
                    aaSig = aa + 1; // 2020 + 1 -> 2021
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 1/1/2021
                }
                else
                    cout << "Dato no válido para día" << endl;
            break;                    
        case 2:
            if(aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0))
                if(dd >= 1 && dd <= 28){ // 28/2/2020
                    ddSig = dd + 1; // 28 + 1 -> 29
                    mmSig = mm; // 2
                    aaSig = aa; // 2020
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; //29/2/2020
                }
                else
                    if(dd == 29){ // 29/02/2020
                        ddSig = 1; // 1
                        mmSig = mm + 1; // 2 + 1 -> 3
                        aaSig = aa; // 2020
                        cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl;// 1/3/2020
                }
                    else
                        cout << "Dato no válido para día" << endl;
            else
                if(dd >= 1 && dd <= 27){ // 27/02/2021
                    ddSig = dd + 1; // 27 + 1 -> 28
                    mmSig = mm; // 2
                    aaSig = aa; // 2021
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 28/2/2021
            }
                else
                    if(dd == 28){ // 28/02/2021
                        ddSig = 1;
                        mmSig = mm + 1; // 2 + 1 -> 3
                        aaSig = aa; // 2021
                    cout << "El día siguiente es: " << ddSig <<"/" << mmSig << "/" << aaSig << endl; // 1/3/2021
                    }
                    else
                        cout << "Dato no válido para día" << endl;
            break;
        default:
            cout << "Dato no válido para mes" << endl;
    }

    cout << endl;
    return 0;
}
