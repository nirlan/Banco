#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Cpf.hpp"
#include "DiaDaSemana.hpp"

namespace Colaboradores {
	class Funcionario : public Pessoa
	{
	private:
		float salario;
		// 0 = Domingo, 1 = Segunda, etc.
		DiaDaSemana diaDoPagamento;
	public:
		Funcionario(Cpf cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento);
		virtual ~Funcionario();
		std::string recuperaNome() const;
		float recuperaSalario() const;
		virtual float bonificacao() const = 0;
	};
}