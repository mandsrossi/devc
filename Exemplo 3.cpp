#include <iostream>
using namespace std;

int AreaQuadrado(int lado)//função com 1 parametro
{
	int A;
	A= lado*lado;
	return(A);
}

int main()
{
int lado, Area;

cout<<"Lado do quadrado: ";
cin>>lado;

Area = AreaQuadrado(lado);
cout<<"\n Area= "<<Area;


//AreaQuadrado(2); //chama a função e passa o valor 2
//AreaQuadrado(5); //chama a função e passa o valor 5
//AreaQuadrado(10); //chama a função e passa o valor 10
}
