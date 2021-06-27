#pragma once
#include <string>

class Cpf
{
private:
	std::string cpf;

public:
	Cpf() = delete;
	Cpf(std::string cpf);	
	std::string recuperaCpf() const;
};

