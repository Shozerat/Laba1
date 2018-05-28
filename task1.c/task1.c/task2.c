#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double fun(double x) {
	return cos(x) + sin(x)*cos(x) - sin(x);
}

int main1() {
	double x, f;
	printf("x = ");
	scanf("%lf", &x);
	f = fun(x);
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%lf", &x);
	f = fun(x);
	printf("f(x) = %f \n", f);

	getchar();
	return 0;
}
