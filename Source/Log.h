#pragma once

#include <iostream>

#include "Configuration.h"

#ifdef DEBUG
#define LOG_RED(...) std::cout << "\033[1;31m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_BLUE(...) std::cout << "\033[1;34m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_CYAN(...) std::cout << "\033[1;36m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_GREEN(...) std::cout << "\033[1;32m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_WHITE(...) std::cout << "\033[1;37m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_YELLOW(...) std::cout << "\033[1;33m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_MAGENTA(...) std::cout << "\033[1;35m" << (__VA_ARGS__) << "\033[0m" << '\n';
#else
#define LOG_RED(...)
#define LOG_BLUE(...)
#define LOG_CYAN(...)
#define LOG_GREEN(...)
#define LOG_WHITE(...)
#define LOG_YELLOW(...)
#define LOG_MAGENTA(...)
#endif