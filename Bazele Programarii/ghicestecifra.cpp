#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
  {
    int numar;
    int ghici;
    int incercari=0;

    srand(time(NULL));
    numar = (rand() % 100) + 1;
    
    
    do
    {
       cout << "introdu o cifra de la 0-100  ";
       cin >> ghici; 
       incercari++;
       if (ghici > numar)
       {
        cout << "mai putin   \n";
       }
       else if (ghici < numar)
        {
           cout << "mai mult  \n"; 
        }
        else 
        {
            cout <<"felicitari ai ghicit din atatea incercari :"  << incercari << '\n';
        }
        
       }
       
     while (ghici != numar);
        

return 0;
    
 }
 
