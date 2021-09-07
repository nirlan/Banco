#pragma once
#include "Funcionario.hpp"
#include "DiaDaSemana.hpp"
#include "Autenticavel.hpp"

class Gerente final : public Colaboradores::Funcionario, public Login::Autenticavel
{
public:
	Gerente(
		Cpf cpf, 
		std::string nome, 
		float salario, 
		DiaDaSemana diaDoPagamento,	
		std::string senha
		);
	float bonificacao() const;
};

