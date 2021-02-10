#define _CRT_SECURE_NO_WARNINGS

#include "def.h"
#include "solve.h"

int main(void)
{
    double a, b, c;
    std::cin >> a >> b >> c;

    SOLUTION s = SolveSquareEquation(a, b, c);

    if (s.flag == ZERO)
        std::cout << "This equation doesn't have roots" << std::endl;
    else if (s.flag == ONE)
        std::cout << s.root1 << std::endl;
    else
        std::cout << s.root1 << ' ' << s.root2 << std::endl;

    return 0;
}