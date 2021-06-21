#pragma once
#include <string>

class Conta
{
private:
	std::string numeroConta;
	std::string cpfTitular;
	std::string nomeTitular;
	float saldo = 0;

public:
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo();
	void definirNomeTitular(std::string nome);
	std::string recuperaNomeTitular();
	void definirCpfTitular(std::string cpf);
	std::string recuperaCpfTitular();
	void definirNumero(std::string numero);
	std::string recuperaNumero();
};