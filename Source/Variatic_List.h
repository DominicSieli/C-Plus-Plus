#include <string>
#include <sstream>

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