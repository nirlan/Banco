#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario)
	: Pessoa(cpf, nome), salario(salario)
{
}

float Funcionario::recuperaSalario()
{
	return salario;
}