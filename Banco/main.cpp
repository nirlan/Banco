#include <iostream>
#include <string>
#include <locale>
#include "Conta.hpp"

using namespace std;

/*	Objetos const s� podem ser acessados por m�todos const
	mas m�todos const podem acessar objetos n�o const. Nesse
	caso, o m�todo recuraSaldo() � declarado como const na sua
	assinatura e na sua implementa��o
*/
void ExibeSaldo(const Conta& conta)
{
	cout << "O saldo da conta �: " << conta.recuperaSaldo() << endl;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Conta umaConta("123456", "Nirlan", "123.456.789-10");
	umaConta.depositar(500);
	umaConta.sacar(200);

	ExibeSaldo(umaConta);

	Conta umaOutraConta("654321", "Souza", "987.654.321-10");
	umaOutraConta.depositar(300);
	umaOutraConta.sacar(50);

	ExibeSaldo(umaOutraConta);

	Conta maisUmaConta("654321", "Souza", "987.654.321-10");

	// invocando m�todo static
	cout << "N�mero de contas: " << Conta::recuperaNumeroDeContas() << endl;

	cout << "Uma conta: " << umaConta.recuperaSaldo() << endl;
	cout << "Nome do titular: " << umaConta.recuperaNomeTitular() << endl;
	cout << "CPF do titular: " << umaConta.recuperaCpfTitular() << endl;
	cout << "Numero da conta: " << umaConta.recuperaNumero() << endl;

	return 0;
}