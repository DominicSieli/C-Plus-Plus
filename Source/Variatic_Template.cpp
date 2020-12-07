#include <string>
#include <sstream>
#include <iostream>

std::string Variatic_Template()
{
	return "";
}

template<typename T1, typename... Tx>
std::string Variatic_Template(const T1& t1, const Tx&... list)
{
	std::stringstream sstream;
	sstream << t1 << " " << Variatic_Template(list...);
	return sstream.str();
}

int main()
{
	std::cout << Variatic_Template("Testing: ", 1, 2, 3) << '\n';
    std::cin.get();
}