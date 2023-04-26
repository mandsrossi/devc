#include <iostream>

using namespace std;

float valor, quantidade, conta;

int main (){
	cout<<"Valor do litro da gasolina:";
	cin>>valor;
	cout<<"Quandidade abastecida:";
	cin>>quantidade;
	
	conta=valor*quantidade;
	cout<<"Valor da conta= R$"<<conta;
}
