#include <iostream>

using namespace std;

float carlos, andre, felipe, total;

int main (){
	
	cout<<"Valor total da conta: R$";
	cin>>total;
	
	carlos=total*0.25;
	andre=total*0.35;
	felipe=total*0.40;
	cout<<endl<<"Valor Carlos (25%): R$"<<carlos;
	cout<<endl<<"Valor Andre (35%): R$"<<andre;
	cout<<endl<<"Valor Felipe (40%): R$"<<felipe;
}
