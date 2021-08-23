#include "ContaCorrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente(std::string numero, Titular titular) :
	Conta(numero, titular)
{
}

float ContaCorrente::taxaDeSaque() const
{
	std::cout << "Chamando método taxaDeSaque de conta corrente" << std::endl;

	return 0.05;
}