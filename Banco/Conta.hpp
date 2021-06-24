#pragma once
#include <string>

class Conta
{
private:
	std::string numeroConta;
	std::string nomeTitular;
	std::string cpfTitular;
	float saldo;

public:
	// elimina o construtor padr�o
	Conta() = delete;

	// m�todo construtor
	Conta(std::string numeroConta, std::string nomeTitular, std::string cpfTitular);

	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNomeTitular() const;
	std::string recuperaCpfTitular() const;
	std::string recuperaNumero() const;
};