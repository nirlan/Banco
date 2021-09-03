#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Autenticavel.hpp"
#include "Cpf.hpp"

class Titular : public Pessoa, public Login::Autenticavel
{
public:
	Titular(Cpf cpf, std::string nome, std::string senha);	
};

