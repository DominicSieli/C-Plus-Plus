#include <iostream>
#include "Configuration.h"

#ifdef LINUX
#include <sys/sysinfo.h>
#endif

int main()
{
	#ifdef LINUX
	struct sysinfo info;

	while (true)
	{
		sysinfo(&info);
		system("clear");
		std::cout << "CPU: " << info.bufferram << '\n';
		std::cout << "Ram: " << info.totalram - info.freeram << '\n';
	}
	#endif
}