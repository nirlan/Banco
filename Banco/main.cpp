#include <iostream>
#include <string>
#include <locale>
#include "Conta.hpp"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Conta umaConta;
	umaConta.definirNomeTitular("Nirlan");

	Conta umaOutraConta;

	umaOutraConta.depositar(500);
	umaOutraConta.sacar(200);

	cout << "Uma conta: " << umaConta.recuperaSaldo() << " Outra conta: " << "umaOutraConta: " << umaOutraConta.recuperaSaldo() << endl;

	return 0;
}