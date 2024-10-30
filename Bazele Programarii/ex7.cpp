#include <iostream>
using namespace std;
int main()
{
 //
double pret_bomboane, pret_biscuiti, pret_mere;
double X , Y , Z;
double total_bomboane , total_biscuiti, total_mere,total_suma;

 cout << "scrie pretul pentru 1 kg de bonboane:";
 cin >> pret_bomboane;
 cout << "scrie pretul pentru 1 kg de biscuiti:";
 cin >> pret_biscuiti;
 cout << "scrie pretul pentru 1 kg de mere:";
 cin >> pret_mere;

 cout <<"cate kg de bomboane doriti:";
  cin >> X;
  cout <<"cate kg de biscuiti doriti:";
  cin >> Y;
  cout <<"cate kg de mere doriti:";
  cin >> Z;

  total_bomboane = X * pret_bomboane;
  total_biscuiti = Y * pret_biscuiti;
  total_mere = Z * pret_mere;
  total_suma = total_biscuiti + total_bomboane + total_mere;

  cout << "pretul pentru" << X << "kg bomboane:" << total_bomboane << "lei " <<endl;
  cout << "pretul pentru" << Y << "kg biscuiti:" << total_biscuiti << "lei " <<endl;
  cout << "pretul pentru" << Z << "kg mere:" << total_mere << "lei " <<endl;
  cout << "suma totala de achitat :"<< total_suma << "lei" << endl;
  




return 0;
}