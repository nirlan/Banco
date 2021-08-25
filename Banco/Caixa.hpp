#pragma once
#include "Funcionario.hpp"

class Caixa final : public Funcionario
{
	Caixa(Cpf cpf, std::string nome, float salario);
	float bonificacao() const;
};

