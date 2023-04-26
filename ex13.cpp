#include <iostream>
#include <locale.h>

using namespace std;

float salario, nvsalario;

int main()
{
setlocale(LC_ALL,"portuguese");

cout<<"Qual o salário? ";
cin>>salario;

if (salario<=1000)
    nvsalario=salario+0.15*salario;
else if (salario<=2000)
         nvsalario=salario+0.10*salario;
     else if (and salario<=3000)   
	          nvsalario=salario+0.05*salario; 
	      else 
		  nvsalario=salario+0.03*salario;

cout<<"Novo salário é: "<<nvsalario;	

/*OU ASSIM TAMBÉM ESTA CORRETO

 if (salario<=1000)
    nvsalario=salario+0.15*salario;
else if (salario>1000 and salario<=2000)
         nvsalario=salario+0.10*salario;
     else if (salario>2000 and salario<=3000)   
	          nvsalario=salario+0.05*salario; 
	      else 
		  nvsalario=salario+0.03*salario;

cout<<"Novo salário é: "<<nvsalario;*/			        

}
