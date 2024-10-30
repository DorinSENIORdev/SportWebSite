#include <iostream>
using namespace std;
int main()
{
string parola;
string parola_corecta = "password";

do
{ 
    cout << "pune parola corecta :";
    cin >> parola;

    if (parola == parola_corecta)
    
        cout << "vati autentificat !"<< endl;

    else
        cout << "parola incorecta" << endl;

} while (parola != parola_corecta);


return 0;

}

