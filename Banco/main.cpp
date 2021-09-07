#include <iostream>
#include <string>
#include <locale>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"

/* Apesar de Conta.hpp j� incluir Titular.hpp
* optei por incluir Titular.hpp individualmente
* para que eu n�o dependa de que outros arquivos
* incluam o que eu preciso...
*/
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "DiaDaSemana.hpp"

using namespace std;
using namespace Colaboradores;
using namespace Login;

/* Objetos passados como par�metros const s� podem ser acessados
* por m�todos const mas m�todos const podem acessar objetos n�o
* const. Nesse caso, o m�todo recuperaSaldo() � declarado como
* const na sua assinatura e na sua implementa��o.
*/
void ExibeSaldo(const Conta& conta)
{
	cout << "O saldo da conta �: " << conta.recuperaSaldo() << endl;
}

void ExibeNumero(const Conta& conta)
{
	cout << "N�mero da conta : " << conta.recuperaNumero() << endl;
}

void ExibeNomeTitular(const Titular& titular)
{
	cout << "O nome do titular �: " << titular.recuperaNome() << endl;
}

void ExibeNomeCpfTitular(const Titular& titular)
{
	cout << "O n�mero do CPF do titular �: " << titular.recuperaCpf() << endl;
}

void RealizaSaque(Conta& conta)
{
	conta.sacar(200);
}

void FazLogin(Autenticavel& alguem, string senha)
{
	if (alguem.autentica(senha)) {
		cout << "Login realizado com sucesso" << endl;
	}
	else {
		cout << "Senha inv�lida" << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	// Em vez de instanciar um novo objeto Cpf, em uma nova vari�vel,
	// eu posso instanciar um objeto tempor�rio que ser� passado direto como
	// par�metro para o construtor de Titular.	
	Titular titular_1(Cpf("123.456.789-10"), "Nirlan", "umasenha");
	FazLogin(titular_1, "umasenha");

	ContaPoupanca umaConta("123456", titular_1);
	umaConta.depositar(500);
	RealizaSaque(umaConta);

	ExibeNomeTitular(titular_1);
	ExibeNomeCpfTitular(titular_1);
	ExibeNumero(umaConta);
	ExibeSaldo(umaConta);

	// Eu posso passar uma string para o construtor de Titular, pois como Cpf �
	// no fundo uma string, ocorre uma CONVERS�O IMPL�CITA
	Titular titular_2(string("312.654.987-10"), "Gabrielle", "outrasenha");
	ContaCorrente umaOutraConta("654321", titular_2);
	umaOutraConta += 300;

	ExibeNomeTitular(titular_2);
	ExibeNomeCpfTitular(titular_2);
	ExibeNumero(umaOutraConta);
	ExibeSaldo(umaOutraConta);

	Titular titular_3(Cpf("987.654.321-10"), "Elisabete", "maisumasenha");
	ContaCorrente maisUmaConta("321654", titular_3);

	ExibeNomeTitular(titular_3);
	ExibeNomeCpfTitular(titular_3);
	ExibeNumero(maisUmaConta);
	ExibeSaldo(maisUmaConta);

	umaOutraConta.transferePara(maisUmaConta, 250);
	ExibeSaldo(umaOutraConta);
	ExibeSaldo(maisUmaConta);

	// invocando m�todo static
	cout << "N�mero de contas: " << Conta::recuperaNumeroDeContas() << endl;

	//utilizando variavel "enum"
	Gerente funcionario(
		Cpf("647.830.455-78"),
		"Nirlan Souza",
		100000.00,
		DiaDaSemana::Sexta,
		"senhagerente"
	);
	cout << "Nome do funcion�rio: " << funcionario.recuperaNome() << endl;
	cout << "CPF n. " << funcionario.recuperaCpf() << endl;
	cout << "Sal�rio: $ ";
	cout.precision(2);
	cout << fixed << funcionario.recuperaSalario() << endl;

	return EXIT_SUCCESS;
}