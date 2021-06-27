#include <iostream>
#include "Titular.hpp"

Titular::Titular(Cpf cpf, std::string nome) :
	cpf(cpf), nome(nome)
{
	verificaTamanhoDoNome();
}

void Titular::verificaTamanhoDoNome()
{
	if (nome.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(EXIT_FAILURE);
	}
}

std::string Titular::recuperaNomeTitular() const
{
	return nome;
}

std::string Titular::recuperaCpfTitular() const
{
	return cpf.recuperaCpf();
}