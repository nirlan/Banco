#pragma once
#include "Funcionario.hpp"
#include "Autenticavel.hpp"

class Gerente final : public Colaboradores::Funcionario, public Login::Autenticavel
{
public:
	Gerente(Cpf cpf, std::string nome, float salario, std::string senha, DiaDaSemana diaDoPagamento);
	float bonificacao() const;
};

