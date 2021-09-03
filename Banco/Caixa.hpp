#pragma once
#include "Funcionario.hpp"

class Caixa final : public Colaboradores::Funcionario
{
	Caixa(Cpf cpf, std::string nome, float salario);
	float bonificacao() const;
};

