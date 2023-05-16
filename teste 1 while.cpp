#include<iostream>
using namespace std;

int x, soma;

int main ()
{

soma=0;	
x=1;
	
	while (x<=10)
{
	cout<<x<<endl;
	soma = soma+x;
	x = x + 1;

}
	cout<<"Soma= "	<< soma;
}
