#include <cmath>

typedef enum check
{
	ZERO = -1,
	ONE = 0,
	TWO = 1
} CHECK;

typedef struct solution
{
	CHECK flag;
	double root1;
	double root2;
} SOLUTION;

SOLUTION SolveSquareEquation(double a, double b, double c);