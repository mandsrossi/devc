#include <iostream>
#include <locale.h>

using namespace std;

float a, b, c;

int main ()
{
setlocale(LC_ALL,"portuguese");

cout<<"Valor A: ";
cin>>a;
cout<<"Valor B: ";
cin>>b;
cout<<"Valor C: ";
cin>>c;

if (a>b and a>c)
cout<<"A � maior";
else if (b>a and b>c)
         cout<<"B � maior";
     else 
	     cout<<"C � maior"     ;



}
