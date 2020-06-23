#include <string>
#include <iostream>

int main()
{
	std::string name = "";
	name.append("Dominic");
	name.append(" Sieli");

	std::string street = "16220 N 7th St. ";
	std::string appartment = "Apt. 2432 ";
	std::string address = street + appartment;

	std::cout << "Name: " << name << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Initials: " << name[0] << "." << name[8] << "." << std::endl;
	std::cout << "Appatrment #: " << appartment.substr(5,4) << std::endl;
	std::cout << "Letters in name: " << (name.length() - 1) << std::endl;
	std::cin.get();
}