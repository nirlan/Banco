#include <iostream>
#include "Conta.hpp"

// vari�vel static
int Conta::numeroDeContas = 0;

// implementa��o do m�todo construtor
Conta::Conta(std::string numero, Titular titular) :
	numero(numero),
	titular(titular),
	saldo(0)
{
	// atributo static
	numeroDeContas++;
}

// implementa��o do m�todo destrutor
Conta::~Conta()
{
	numeroDeContas--;
}

void Conta::sacar(float valorASacar)
{
	std::cout << "Chamando m�todo sacar de Conta" << std::endl;
	if (valorASacar < 0) {
		std::cout << "N�o pode sacar valor negativo" << std::endl;
		return;
	}

	float tarifaDeSaque = valorASacar * 0.05;
	float valorDoSaque = valorASacar + tarifaDeSaque;

	if (valorDoSaque > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
	}

	saldo -= valorDoSaque;
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

std::string Conta::recuperaNumero() const
{
	return numero;
}

// m�todo static
int Conta::recuperaNumeroDeContas()
{
	return numeroDeContas;
}
