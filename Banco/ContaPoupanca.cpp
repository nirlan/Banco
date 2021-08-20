#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular):
	Conta(numero, titular)
{
}

void ContaPoupanca::sacar(float valorASacar)
{
	std::cout << "Chamando m�todo sacar de conta poupanca" << std::endl;
	if (valorASacar < 0) {
		std::cout << "N�o pode sacar valor negativo" << std::endl;
		return;
	}

	float tarifaDeSaque = valorASacar * 0.03;
	float valorDoSaque = valorASacar + tarifaDeSaque;

	if (valorDoSaque > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
	}

	saldo -= valorDoSaque;
}
