#include "app.h"
#include <sstream>
#include <iomanip>
#include <format>

namespace vsite::oop::v1
{
	int unos_broja() {
		int x;
		std::cin >> x;
		return x;
	}

	std::string to_hex(int n) {
		std::ostringstream ss;
		ss << std::uppercase << std::hex << n;
		return ss.str();
	}

	std::string to_exp(double x) {
		std::ostringstream ss;
		ss << std::nouppercase
			<< std::scientific
			<< std::setprecision(2)
			<< x;
		return ss.str();
	}


	void mult_table(int n, std::ostream& os) {
		if (n <= 0 || n > 20) return;

		os << 0;
		for (int j = 1; j <= n; ++j)
			os << std::setw(4) << j;
		os << '\n';

		for (int i = 1; i <= n; ++i) {
			os << i;
			for (int j = 1; j <= n; ++j)
				os << std::setw(4) << (i * j);
			os << '\n';
		}
	}

} // namespace

