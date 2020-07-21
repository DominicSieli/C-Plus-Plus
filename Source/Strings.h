#pragma once

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

	std::cout << "Name: " << name << '\n';
	std::cout << "Address: " << address << '\n';
	std::cout << "Initials: " << name[0] << "." << name[8] << "." << '\n';
	std::cout << "Appatrment: " << appartment.substr(5,4) << '\n';
	std::cout << "Letters in name: " << (name.length() - 1) << '\n';

	std::cin.get();
}