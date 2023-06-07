#include <iostream>
using namespace std;

void AreaQuadrado(int lado)//função com 1 parametro
{
	int A;
	A= lado*lado;
	cout<<"\n Area= "<<A;
}

int main()
{
AreaQuadrado(2); //chama a função e passa o valor 2
AreaQuadrado(5); //chama a função e passa o valor 5
AreaQuadrado(10); //chama a função e passa o valor 10
}
