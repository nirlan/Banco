#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Cpf.hpp"

class Funcionario : public Pessoa
{
private:	
	float salario;
public:
	Funcionario(Cpf cpf, std::string nome, float salario);
	std::string recuperaNome() const;
	float recuperaSalario();
	virtual float bonificacao() const = 0;
	float recuperaSalario() const;
};

