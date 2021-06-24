#include <iostream>
#include "Conta.hpp"

Conta::Conta(std::string numeroConta, std::string nomeTitular, std::string cpfTitular) :
	numeroConta(numeroConta),
	nomeTitular(nomeTitular),
	cpfTitular(cpfTitular),
	saldo(0)
{
}

void Conta::sacar(float valorASacar)
{
	if (saldo < 0) {
		std::cout << "Não pode sacar valor negativo" << std::endl;
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
		std::cout << "Não pode depositar valor negativo" << std::endl;

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