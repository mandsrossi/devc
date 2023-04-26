#include<iostream>
#include<locale.h>

using namespace std;

float salario, vprestacao, vemprestimo, limiteprest;
int nroprestacao;

int main()
{
setlocale(LC_ALL,"portuguese");
	cout<<"Salario: ";
	cin>>salario;
	
	limiteprest=0.30*salario;
	cout<<"Valor Maximo da prestacao: R$"<<limiteprest;
	
	cout<<"\nValor do emprestimo: R$";
	cin>>vemprestimo;
	
	cout<<"\nNumero de prestacoes (6, 12, 18, 24, 36): ";
	cin>>nroprestacao;
	
	vprestacao = vemprestimo/nroprestacao;
	
	cout<<"\nValor da prestacao: R$"<<vprestacao;
	
	if (vprestacao<=limiteprest)
	cout<<"\nEmprestimo concedido";
	else
	cout<<"\nEmprestimo NÃO concedido";
	
	
}
