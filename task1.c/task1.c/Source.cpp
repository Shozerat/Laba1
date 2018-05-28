#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double x, f;
	printf("x = ");
	scanf("%lf", &x);
	f = (cos(x)+sin(x))/(cos(x)-sin(x));
	printf("f(x) = %f \n", f);

	printf("x= ");
	scanf("%lf", &x);
	f = (cos(x) + sin(x)) / (cos(x) - sin(x));
	printf("f(x) = %f \n", f);

	getchar();
	return 0;
}