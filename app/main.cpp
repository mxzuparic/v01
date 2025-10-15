#include "app.h"
#include <iostream>
#include <limits>

using namespace vsite::oop::v1;
// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

int main()
{
	std::cout << "Unesi broj: ";
	int n = unos_broja();

	std::cout << "\nHeksadecimalni zapis: " << to_hex(n) << std::endl;

	std::cout << "\nEksponencijalni zapis: " << to_exp(n) << std::endl;

	std::cout << "\nTablica mnozenja do " << n << ":\n";
	mult_table(n, std::cout);

	return 0;

}
