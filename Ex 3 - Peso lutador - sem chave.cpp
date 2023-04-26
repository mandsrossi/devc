#include <iostream>

using namespace std;

float peso; 

int main ()
{
cout<<"Qual o peso do lutador? ";
cin>>peso;	

if (peso<60)
	cout<<"\nPeso Pena";
  else if (peso<=75)
       cout<<"\nPeso Medio";
	   else if (peso<=90)
	       cout<<"\nPeso Super Medio";
			else
		      cout<<"\nPeso Pesado"	;
				
}
