#include <string>
#include <vector>
#include <iostream>
#include <unistd.h>

std::vector<std::string> Substrings(const std::string& string, const char& separator)
{
   unsigned int index = 0;
   unsigned int length = 0;
   std::vector<std::string> substrings;

   for(unsigned int i = 0; i < string.length(); i++)
   {
	   if(string[i] != separator)
	   {
		   index = i;

		   for(unsigned int l = i; l < string.length(); l++)
		   {
			   if(string[l] == separator)
	   			{
					i = l;
		   			length = l - index;
		   			substrings.push_back(string.substr(index, length));
					break;
	   			}

				if(l == string.length() - 1)
	   			{
					i = l;
		   			length = (l - index) + 1;
		   			substrings.push_back(string.substr(index, length));
					break;
	   			}
		   }
	   }
   }

   return substrings;
}

int main()
{
	std::string string = "Substring_1-Substring_2-Substring_3-Substring_4-Substring_5-Substring_6-Substring_7-Substring_8";
	//std::vector<std::string> substrings = Substrings(get_current_dir_name(), '/');
	std::vector<std::string> substrings = Substrings(string, '-');

	for(unsigned int i = 0; i < substrings.size(); i++)
	{
		std::cout << substrings[i] << std::endl;
	}

	std::cin.get();
}