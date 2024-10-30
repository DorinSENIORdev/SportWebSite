#include <iostream>
#include <cstdlib>
 #include <ctime>
using namespace std;

int main()
 {
    
    srand(time(NULL));

    int num1 = (rand()% 6)+ 1;
     int num2 = (rand()% 6)+ 1;
      int num3= (rand()% 6)+ 1;

            cout <<"Primul zar  : "<< num1 << endl;
            cout <<"Al doilea zar : "<< num2 << endl;
            cout <<"Al treilea zar : "<< num3 << endl; 
    

   return 0;

  
}
