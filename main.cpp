#include <iostream>
#include <tchar.h>

using namespace std;

int main ()
{
	string nome;
	int idade;
	
	_tsetlocale(LC_ALL, _T("portuguese"));
	
	cout << "Digite seu nome: ";
	cin >> nome;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if (idade >= 18)
	{
		cout << nome << " � maior de idade";
	}
	
	else cout << nome << " � menor de idade";
	
	
	
	
	
	return 0;
}