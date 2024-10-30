#include <iostream>
#include <ctime>
using namespace std;


char USERchoise();
char compCHOICE();
void showchoise(char choice);
void castigator(char player , char computer);

int main (){

    char player;
    char computer;

    player = USERchoise();
    cout <<"Alegerea ta este : ";
    showchoise(player);
    computer = compCHOICE();
    cout <<"Alegerea oponentului este : ";
    showchoise(computer);

    castigator(player,computer);


return 0;
}


char USERchoise(){
  char player;
  do
  {cout <<"Alege una dintre aceste trei optiuni : \n";
   cout << "'p' pentru piatra \n " ;
   cout << "'f' pentru foarfeca \n ";
   cout << "'h' pentru hartie \n";
   cin >> player;
    
  } while (player != 'p' && player != 'f' && player != 'h');
   return player;
}
char compCHOICE(){
 char computer;
 srand(time(NULL));
     int num = rand() % 3 + 1;
     switch (num)
     {
     case 1: return 'p';
     case 2: return 'f';
     case 3: return 'h';
     
     }
    return 0; 
}
void showchoise(char choice){

    switch (choice)
    {
    case 'p':  cout << "Piatra\n";
        break;
    case 'f':  cout << "Foarfece\n";
        break;    
    case 'h':  cout << "Hartie\n";
        break;    
    }
    
}
void castigator(char player , char computer){
 switch (player)
 {
 case 'p':   if(computer == 'p'){
                 cout << "Egalitate\n" ;}
             else if (computer == 'f'){
                 cout << "Ai castigat";}
             else {
                cout << "Ai pierdut";
             }
            break;
 case 'f':   if(computer == 'f'){
                 cout << "Egalitate\n" ;}
             else if (computer == 'h'){
                 cout << "Ai castigat";}
             else {
                cout << "Ai pierdut";
             }
            break; 
 case 'h':   if(computer == 'h'){
                 cout << "Egalitate\n" ;}
             else if (computer == 'p'){
                 cout << "Ai castigat";}
             else {
                cout << "Ai pierdut";
             }
            break;                     

 }
}
   