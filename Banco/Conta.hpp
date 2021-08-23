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

protected:
	float saldo;

public:
	// elimina o construtor padrão
	Conta() = delete;

	// método construtor
	Conta(std::string numero, Titular titular);

	// método destrutor
	virtual ~Conta();
	
	// "virtual" permite que o compilador em tempo de execução verifique
	// se o objeto sobre o qual está sendo chamado o método "sacar", que
	// é sobrescrito
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNumero() const;

	// Método puramento virtual; na classe base Conta esse método
	// não tem implementação, mas sua implementação é obrigatória
	// nas sub classes.
	virtual float taxaDeSaque() const = 0;
};