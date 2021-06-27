#pragma once
#include <string>

class Titular
{
private:
	std::string cpf;
	std::string nome;

public:
	Titular(std::string cpf, std::string nome);
	std::string recuperaNomeTitular() const;
	std::string recuperaCpfTitular() const;

private:
	void verificaTamanhoDoNome();
};

