#pragma once
#include <string>

class Conta
{
private:
	static int numeroDeContas;

public:
	static int recuperaNumeroDeContas();

private:
	std::string numeroConta;
	std::string nomeTitular;
	std::string cpfTitular;
	float saldo;

public:
	// elimina o construtor padrão
	Conta() = delete;

	// método construtor
	Conta(std::string numeroConta, std::string nomeTitular, std::string cpfTitular);

	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNomeTitular() const;
	std::string recuperaCpfTitular() const;
	std::string recuperaNumero() const;
};