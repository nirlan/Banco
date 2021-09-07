#include "Funcionario.hpp"
#include <iostream>

Colaboradores::Funcionario::Funcionario(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento)
	: Pessoa(cpf, nome), salario(salario), diaDoPagamento(diaDoPagamento)
{
}

Colaboradores::Funcionario::~Funcionario()
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