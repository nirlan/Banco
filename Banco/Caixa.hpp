#pragma once
#include "Funcionario.hpp"
#include "DiaDaSemana.hpp"

class Caixa final : public Colaboradores::Funcionario
{
	Caixa(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento);
	float bonificacao() const;
};

