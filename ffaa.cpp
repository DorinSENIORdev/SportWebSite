#include <iostream>
using namespace std;

int main() {
    //Se dă un număr natural. Să se elaboreze un program care să numere de câte ori se
    //găsește cifra 7 în numărul natural dat.

    int n;
   int contor ;
    cout << "Introduceti un numar natural: ";
    cin >> n;
    if (n == '7')
    {
        contor++;
        cout << "in numarul tau sunt atatea cifre de 7 :  " << contor << endl ;
    }else{
        cout << "nu e nici o cifra de 7 in numarul tau !";
    }
    


    return 0;
}
