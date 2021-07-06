#include <iostream>
#include <string>
#include <locale>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"

/* Apesar de Conta.hpp já incluir Titular.hpp
* optei por incluir Titular.hpp individualmente
* para que eu não dependa de que outros arquivos
* incluam o que eu preciso...
*/
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"

using namespace std;

/* Objetos passados como parâmetros const só podem ser acessados
* por métodos const mas métodos const podem acessar objetos não
* const. Nesse caso, o método recuperaSaldo() é declarado como
* const na sua assinatura e na sua implementação.
*/
void ExibeSaldo(const Conta& conta)
{
	cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

void ExibeNumero(const Conta& conta)
{
	cout << "Número da conta : " << conta.recuperaNumero() << endl;
}

void ExibeNomeTitular(const Titular& titular)
{
	cout << "O nome do titular é: " << titular.recuperaNome() << endl;
}

void ExibeNomeCpfTitular(const Titular& titular)
{
	cout << "O número do CPF do titular é: " << titular.recuperaCpf() << endl;
}

void RealizaSaque(Conta& conta)
{
	conta.sacar(200);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	/* Em vez de instanciar um novo objeto Cpf, em uma nova variável,
	* eu posso instanciar um objeto temporário que será passado diretgo como
	* parâmetro para o construtor de Titular.
	*/
	Titular titular_1(Cpf("123.456.789-10"), "Nirlan");
	ContaPoupanca umaConta("123456", titular_1);
	umaConta.depositar(500);
	RealizaSaque(umaConta);

	ExibeNomeTitular(titular_1);
	ExibeNomeCpfTitular(titular_1);
	ExibeNumero(umaConta);
	ExibeSaldo(umaConta);

	/* Eu posso passar uma string para o construtor de Titular, pois como Cpf é
	   no fundo uma string, ocorre uma CONVERSÂO IMPLÍCITA */
	Titular titular_2(string("312.654.987-10"), "Gabrielle");
	ContaPoupanca umaOutraConta("654321", titular_2);

	umaOutraConta.depositar(300);
	umaOutraConta.sacar(50);

	ExibeNomeTitular(titular_2);
	ExibeNomeCpfTitular(titular_2);
	ExibeNumero(umaOutraConta);
	ExibeSaldo(umaOutraConta);

	Titular titular_3(Cpf("987.654.321-10"), "Elisabete");
	Conta maisUmaConta("321654", titular_3);

	ExibeNomeTitular(titular_3);
	ExibeNomeCpfTitular(titular_3);
	ExibeNumero(maisUmaConta);
	ExibeSaldo(maisUmaConta);

	// invocando método static
	cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

	Funcionario funcionario(Cpf("647.830.455-78"), "Nirlan Souza", 100000.00);
	cout << "Nome do funcionário: " << funcionario.recuperaNome() << endl;
	cout << "CPF n. " << funcionario.recuperaCpf() << endl;
	cout << "Salário: $ ";
	cout.precision(2);
	cout << fixed << funcionario.recuperaSalario() << endl;

	return EXIT_SUCCESS;
}