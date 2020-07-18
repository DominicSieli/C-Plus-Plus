#pragma once

#include <iostream>

#include "Color_Codes.h"
#include "Configuration.h"

#ifdef DEBUG_MODE

#ifdef LINUX
#define LOG_RED(...) std::cout << "\033[1;" << Color::RED << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_BLUE(...) std::cout << "\033[1;" << Color::BLUE << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_CYAN(...) std::cout << "\033[1;" << Color::CYAN << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_GREEN(...) std::cout << "\033[1;" << Color::GREEN << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_WHITE(...) std::cout << "\033[1;" << Color::WHITE << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_YELLOW(...) std::cout << "\033[1;" << Color::YELLOW << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#define LOG_MAGENTA(...) std::cout << "\033[1;" << Color::MAGENTA << "m" << (__VA_ARGS__) << "\033[0m" << '\n';
#endif

#ifdef WINDOWS
#include <windows.h>
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
#define LOG_RED(...) SetConsoleTextAttribute(console, Color::RED); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_BLUE(...) SetConsoleTextAttribute(console, Color::BLUE); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_CYAN(...) SetConsoleTextAttribute(console, Color::CYAN); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_GREEN(...) SetConsoleTextAttribute(console, Color::GREEN); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_WHITE(...) SetConsoleTextAttribute(console, Color::WHITE); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_YELLOW(...) SetConsoleTextAttribute(console, Color::YELLOW); std::cout << (__VA_ARGS__) << std::endl;
#define LOG_MAGENTA(...) SetConsoleTextAttribute(console, Color::MAGENTA); std::cout << (__VA_ARGS__) << std::endl;
#endif

#else
#define LOG_RED(...)
#define LOG_BLUE(...)
#define LOG_CYAN(...)
#define LOG_GREEN(...)
#define LOG_WHITE(...)
#define LOG_YELLOW(...)
#define LOG_MAGENTA(...)
#endif