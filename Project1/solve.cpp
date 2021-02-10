#include "solve.h"

double CountDiscriminant(double a, double b, double c)
{
    double d = b * b - 4 * a * c;

    return d;
}

SOLUTION SolveSquareEquation(double a, double b, double c)
{
    SOLUTION s = {};

    double D = CountDiscriminant(a, b, c);
    if (D < 0)
        s.flag = ZERO;
    else if (D == 0)
    {
        s.flag = ONE;
        s.root1 = (-1) * b / (2 * a);
    }
    else
    {
        s.flag = TWO;
        s.root1 = ((-1) * b + sqrt(D)) / (2 * a);
        s.root2 = ((-1) * b - sqrt(D)) / (2 * a);
    }
    return s;
}