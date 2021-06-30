#include "Cpf.hpp"

Cpf::Cpf(std::string cpf) 
	: cpf(cpf)
{
	// valida��o complexa de CPF
}

std::string Cpf::recuperaCpf() const
{
	return cpf;
}