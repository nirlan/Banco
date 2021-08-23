#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string cpf) 
	: cpf(cpf)
{
	// validação complexa de CPF
	std::cout << "Cpf criado" << std::endl;
}

std::string Cpf::recuperaCpf() const
{
	return cpf;
}