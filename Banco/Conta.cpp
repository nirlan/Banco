#include <iostream>
#include "Conta.hpp"

// variável static
int Conta::numeroDeContas = 0;

// implementação do método construtor
Conta::Conta(std::string numero, Titular titular) :
	numero(numero),
	titular(titular),
	saldo(0)
{
	// atributo static
	numeroDeContas++;
}

// implementação do método destrutor
Conta::~Conta()
{
	std::cout << "Destrutor da conta corrente" << std::endl;
	numeroDeContas--;
}

float Conta::taxaDeSaque() const
{
	std::cout << "Chamando método taxaDeSaque de conta corrente" << std::endl;

	return 0.05;
}

void Conta::sacar(float valorASacar)
{
	std::cout << "Chamando método sacar de conta corrente" << std::endl;
	if (valorASacar < 0) {
		std::cout << "Não pode sacar valor negativo" << std::endl;
		return;
	}

	float tarifaDeSaque = valorASacar * taxaDeSaque();
	float valorDoSaque = valorASacar + tarifaDeSaque;

	if (valorDoSaque > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
	}

	saldo -= valorDoSaque;
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

std::string Conta::recuperaNumero() const
{
	return numero;
}

// método static
int Conta::recuperaNumeroDeContas()
{
	return numeroDeContas;
}
