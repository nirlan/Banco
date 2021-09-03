#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Cpf.hpp"

namespace Colaboradores {
	class Funcionario : public Pessoa
	{
	private:
		float salario;
	public:
		Funcionario(Cpf cpf, std::string nome, float salario);
		std::string recuperaNome() const;
		float recuperaSalario() const;
		virtual float bonificacao() const = 0;
	};
}