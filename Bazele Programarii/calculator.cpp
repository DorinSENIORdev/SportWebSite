#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    char op; 
    double PrimulTermen, TermenulDoi, result = 0;
    int flag = 0;
   
    // Citim primul termen
    cout << "Introdu primul numar: ";
    cin >> PrimulTermen;

    // Citim operatorul
    cout << "Introdu operatia (+, -, *, /): ";
    cin >> op;
   
    // Citim al doilea termen
    cout << "Introdu al doilea numar: ";
    cin >> TermenulDoi;

    // Folosim switch pentru operații
    switch (op)
    {
        case '-' :
            result = PrimulTermen - TermenulDoi;
            break;
        case '+' :
            result = PrimulTermen + TermenulDoi;
            break;
        case '*' :
            result = PrimulTermen * TermenulDoi;
            break;
        case '/' :
            if (TermenulDoi != 0) {
                result = PrimulTermen / TermenulDoi;
            } else {
                cout << "IMPARTIREA LA 0 ESTE INTERZISA!" << endl;
                flag = 1;  // Marcam că e o eroare
            }
            break;
        default:
            cout << "Operatie eronata!" << endl;
            flag = 1;  // Marcam că e o eroare
            break;
    }

    // Verificăm dacă nu a fost o eroare
    if (flag != 1) {
        cout << "Rezultatul este: " << result << endl;
    }

    return 0;
}

