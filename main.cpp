#include <iostream>
#include <cmath>

int main()
{
    int n;
    long res = 0;
    setlocale(LC_ALL, "pt_BR.UTF-8");

    std::cout << "O gap A036562 é definido por a(n) = 4^(n+1) + 3*2^n + 1" << std::endl;
    std::cout << "Digite o valor de n" << std::endl;
    std::cin >> n;

    // Calcula o gap
    for (int i = 0; i < n; i++)
    {
        res = pow(4, i + 1) + 3 * pow(2, i) + 1;
        std::cout << res << std::endl;
    }

    return 0;
}