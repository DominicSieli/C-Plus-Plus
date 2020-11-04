#include <iostream>

auto Square = [](int n) -> int { return n * n; };
auto Sum = [](int n1, int n2) -> int { return n1 + n2; };

int main()
{
    int n = 8;

    std::cout << Sum(n, n) << '\n';
    std::cout << Square(n) << '\n';

    std::cout << '\n';

    [=]() { std::cout << n + n << '\n'; }();
    [&]() { std::cout << n * n << '\n'; }();

    std::cin.get();
}