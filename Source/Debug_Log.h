#include <iostream>

#include "Variatic_List.h"

#define LOG(...) std::cout << "[LOG]: " << Variatic_List(__VA_ARGS__) << '\n';

#define LOG_ERROR(...) std::cout << "[ERROR]: " << Variatic_List(__VA_ARGS__) << '\n';

#define LOG_WARNING(...) std::cout << "[WARNING]: " << Variatic_List(__VA_ARGS__) << '\n';