#include<iostream>
using namespace std;

int AreaRetangulo(int l1, int l2) 
{
	int A;
	A= l1*l2;
	return(A);

}

int main ()
{

int lado1, lado2, Area;

cout<<"Lado 1: " ;cin>> lado1;
cout<<"Lado 2: ";cin>>lado2;

Area = AreaRetangulo(lado1,lado2);
cout<<"\nArea= "<<Area;

}
