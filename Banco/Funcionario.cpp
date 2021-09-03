#include "Funcionario.hpp"
#include <iostream>

Colaboradores::Funcionario::Funcionario(Cpf cpf, std::string nome, float salario)
	: Pessoa(cpf, nome), salario(salario)
{
}

std::string Colaboradores::Funcionario::recuperaNome() const
{
	return nome;
}

float Colaboradores::Funcionario::recuperaSalario() const
{
	return salario;
}

