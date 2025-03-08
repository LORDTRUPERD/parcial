#include <iostream>

using namespace std;

 int main(){

 int a,b;
  cout << "ingrese un numero impar";
  cin >> a;
  cout << "ingrese otro numero un numero par";
  cin >> b;
     int suma= a + b;
while (suma<50){
suma=suma+1;
}
cout<<suma <<endl;
if (suma > 50 )
{
    cout<< "no a seguido instrucciones"<< endl;
}
}