#include <iostream>
#include "Pessoa.hpp"

Pessoa::Pessoa(Cpf cpf, std::string nome) 
	: cpf(cpf), nome(nome)
{
	verificaTamanhoDoNome();
}

void Pessoa::verificaTamanhoDoNome()
{
	if (nome.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(EXIT_FAILURE);
	}
}

std::string Pessoa::recuperaNome() const
{
	return nome;
}

std::string Pessoa::recuperaCpf() const
{
	return cpf.recuperaCpf();
}

