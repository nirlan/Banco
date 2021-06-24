#include <iostream>
#include <string>
#include <locale>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
	cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Conta umaConta("123456", "Nirlan", "123.456.789-10");
	umaConta.depositar(500);
	umaConta.sacar(200);

	cout << "Uma conta: " << umaConta.recuperaSaldo() 
		<< " Nome do titular: " << umaConta.recuperaNomeTitular()
		<< " CPF do titular: " << umaConta.recuperaCpfTitular()
		<< " Numero da conta: " << umaConta.recuperaNumero() << endl;

	return 0;
}