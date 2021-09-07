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

protected:
	float saldo;

public:
	// elimina o construtor padr�o
	Conta() = delete;

	// m�todo construtor
	Conta(std::string numero, Titular titular);

	// m�todo destrutor
	virtual ~Conta();
	
	// "virtual" permite que o c�digo, em tempo de execu��o, verifique
	// se o objeto sobre o qual est� sendo chamado o m�todo � sobrescrito
	void sacar(float valorASacar);
	void depositar(float valorADepositar);

	// Operator overload
	// Permitir� fazer "umaConta += 300;" sem precisar usar diretamente
	// o m�todo "depositar"
	void operator+=(float valorADepositar);

	float recuperaSaldo() const;
	std::string recuperaNumero() const;

	// M�todo puramento virtual; na classe base Conta esse m�todo
	// n�o tem implementa��o, mas sua implementa��o � obrigat�ria
	// nas sub classes.
	virtual float taxaDeSaque() const = 0;
};