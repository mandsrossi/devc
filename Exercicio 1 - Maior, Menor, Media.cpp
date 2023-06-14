#include <iostream>
using namespace std;

//função para encontrar maior valor
int	MaiorValor(int a, int b, int c)
{
	if (a>b and a>c)
		return(a);
	else if (b>c)	
			return(b);
		else
			return(c);
}

//função para encontrar menor valor
int	MenorValor(int a, int b, int c)
{
	if (a<b and a<c)
		return(a);
	else if (b>c)	
			return(b);
		else
			return(c);
}

float Media(int a, int b, int c)
{
	float soma, md;
	soma= a+b+c;
	md=soma/3;
	return(md);
}

int main()

{
	int A, B, C, maior, menor;
	float media;
	
	cout<<"A: "; cin>>A;
	cout<<"B: "; cin>>B;
	cout<<"C: "; cin>>C;
	
	maior= MaiorValor(A,B,C);
	cout<<"\nMaior valor: "<<maior;
	
	menor= MenorValor(A,B,C);
	cout<<"\nMenor valor: "<<menor;
	
	media= Media(A,B,C);
	cout<<"\nMedia: "<<media;
	
}
