#pragma once
#include <string>
#include "Titular.hpp"

class Conta
{
private:
	// atributo est�tico - comum a todas as inst�ncias de Conta
	static int numeroDeContas;

public:
	/* M�todo est�tico - n�o carrega a refer�ncia a um ponteiro
	   para uma inst�ncia da classe */ 
	static int recuperaNumeroDeContas();

private:
	// atributos privados
	std::string numero;
	Titular titular;
	float saldo;

public:
	// elimina o construtor padr�o
	Conta() = delete;

	// m�todo construtor
	Conta(std::string numero, Titular titular);

	// m�todo destrutor
	~Conta();

	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNumero() const;
};