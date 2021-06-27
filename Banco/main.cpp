#include <iostream>
#include <string>
#include <locale>
#include "Conta.hpp"

/* Apesar de Conta.hpp j� incluir Titular.hpp
* optei por incluir Titular.hpp individualmente
* para que eu n�o dependa de que outros arquivos
* incluam o que eu preciso...
*/
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;

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
	cout << "O nome do titular �: " << titular.recuperaNomeTitular() << endl;
}

void ExibeNomeCpfTitular(const Titular& titular)
{
	cout << "O n�mero do CPF do titular �: " << titular.recuperaCpfTitular() << endl;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	/* Em vez de instanciar um novo objeto Cpf, em uma nova vari�vel,
	* eu posso instanciar um objeto tempor�rio que ser� passado diretgo como
	* par�metro para o construtor de Titular.
	*/
	Titular titular_1(Cpf("123.456.789-10"), "Nirlan");
	Conta umaConta("123456", titular_1);
	umaConta.depositar(500);
	umaConta.sacar(200);

	ExibeNomeTitular(titular_1);
	ExibeNomeCpfTitular(titular_1);
	ExibeNumero(umaConta);
	ExibeSaldo(umaConta);

	/* Eu posso passar uma string para o construtor de Titular, pois como Cpf �
	   no fundo uma string, ocorre uma CONVERS�O IMPL�CITA */
	Titular titular_2(string("312.654.987-10"), "Gabrielle");
	Conta umaOutraConta("654321", titular_2);

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

	// invocando m�todo static
	cout << "N�mero de contas: " << Conta::recuperaNumeroDeContas() << endl;

	return EXIT_SUCCESS;
}