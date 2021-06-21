#include <iostream>
#include "Conta.hpp"

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

float Conta::recuperaSaldo()
{
	return saldo;
}

void Conta::definirNomeTitular(std::string nome)
{
	nomeTitular = nome;
}

std::string Conta::recuperaNomeTitular()
{
	return nomeTitular;
}

void Conta::definirCpfTitular(std::string cpf)
{
	cpfTitular = cpf;
}

std::string Conta::recuperaCpfTitular()
{
	return cpfTitular;
}

void Conta::definirNumero(std::string numero)
{
	numeroConta = numero;
}

std::string Conta::recuperaNumero()
{
	return numeroConta;
}