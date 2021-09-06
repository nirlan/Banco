#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario, std::string senha, DiaDaSemana diaDoPagamento) :
	Funcionario(cpf, nome, salario, diaDoPagamento), Autenticavel(senha)
{
}

float Gerente::bonificacao() const
{
	return recuperaSalario() * 0.5;
}