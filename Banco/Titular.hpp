#pragma once
#include <string>
#include "Cpf.hpp"

class Titular
{
private:
	Cpf cpf;
	std::string nome;

public:
	Titular() = delete;
	Titular(Cpf cpf, std::string nome);
	std::string recuperaNomeTitular() const;
	std::string recuperaCpfTitular() const;

private:
	void verificaTamanhoDoNome();
};

