#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;

float a, b, c, x1, x2;
int delta;

int main()
{
setlocale(LC_ALL,"portuguese");

cout<<"Valor de A: ";
cin>>a;

cout<<"Valor de B: ";
cin>>b;

cout<<"Valor de C: ";
cin>>c;

delta=b*b-4*a*c;
cout<<"Valor de delta= ";
cout<<delta;

if (delta<0)
{
      cout<<"\nnão existem raizes reais";}

if (delta>=0)
  {
    cout<<"\nexistem raizes reais";
	x1=(-b+sqrt(delta))/(2*a);
	cout<<"\n x1="<<x1;
	
	x2=(-b-sqrt(delta))/(2*a);
	cout<<"\n x2="<<x2;
	}
}
