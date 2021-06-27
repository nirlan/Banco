#pragma once
#include <string>
#include "Titular.hpp"

class Conta
{
private:
	// atributo estático - comum a todas as instâncias de Conta
	static int numeroDeContas;

public:
	/* Método estático - não carrega a referência a um ponteiro
	   para uma instância da classe */ 
	static int recuperaNumeroDeContas();

private:
	// atributos privados
	std::string numero;
	Titular titular;
	float saldo;

public:
	// elimina o construtor padrão
	Conta() = delete;

	// método construtor
	Conta(std::string numero, Titular titular);

	// método destrutor
	~Conta();

	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNumero() const;
};