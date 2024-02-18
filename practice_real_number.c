#include <stdio.h>

int main()
{
	float num1 = 1.97f;
	long double num2 = 5.5242181;
	double num3 = 37792.8e+4;

	printf("%f %Lf %f\n", num1, num2, num3);
	// 1.970000 5.524218 37928000.000000

	return 0;
}