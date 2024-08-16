#include <iostream>
#include <string>
#include <locale.h>
using namespace std;


int main()
{
	int chave, i;
	char puro [4];
	int tam = sizeof(puro);
	char crip [4];
	printf ("Digite a chave: ");
	scanf ("%d" , &chave);
	printf ("Digite o puro: ");
	scanf ("%d" , &puro);
	for (i=0; i<tam; i++);

	{
		printf("%c\n", puro [i]);
	}
	return 0;
}

