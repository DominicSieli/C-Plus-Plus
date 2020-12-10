#include <string>
#include <sstream>
#include <iostream>

std::string Variatic_List()
{
	return "";
}

template<typename T1, typename... Tx>
std::string Variatic_List(const T1& t1, const Tx&... list)
{
	std::stringstream sstream;
	sstream << t1 << " " << Variatic_List(list...);
	return sstream.str();
}

int main()
{
	std::cout << Variatic_List("Dom", 'A', 2.22, 4) << '\n';

	std::cin.get();
}