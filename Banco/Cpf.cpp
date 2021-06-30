#include "Cpf.hpp"

Cpf::Cpf(std::string cpf) 
	: cpf(cpf)
{
	// validação complexa de CPF
}

std::string Cpf::recuperaCpf() const
{
	return cpf;
}