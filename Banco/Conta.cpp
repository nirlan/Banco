#include <iostream>
#include "Conta.hpp"

// vari�vel static
int Conta::numeroDeContas = 0;

// implementa��o do m�todo construtor
Conta::Conta(std::string numeroConta, std::string nomeTitular, std::string cpfTitular) :
	numeroConta(numeroConta),
	nomeTitular(nomeTitular),
	cpfTitular(cpfTitular),
	saldo(0)
{
	verificaTamanhoDoNome();
	numeroDeContas++;
}

// implementa��o do m�todo destrutor
Conta::~Conta()
{
	numeroDeContas--;
}

void Conta::sacar(float valorASacar)
{
	if (saldo < 0) {
		std::cout << "N�o pode sacar valor negativo" << std::endl;
		return;
	}

	if (valorASacar > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
	}

	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
	if (valorADepositar < 0) {
		std::cout << "N�o pode depositar valor negativo" << std::endl;
	}

	saldo += valorADepositar;
}

float Conta::recuperaSaldo() const
{
	return saldo;
}

std::string Conta::recuperaNomeTitular() const
{
	return nomeTitular;
}

std::string Conta::recuperaCpfTitular() const
{
	return cpfTitular;
}

std::string Conta::recuperaNumero() const
{
	return numeroConta;
}

// m�todo static
int Conta::recuperaNumeroDeContas()
{
	return numeroDeContas;
}

void Conta::verificaTamanhoDoNome()
{
	if (nomeTitular.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(EXIT_FAILURE);
	}
}