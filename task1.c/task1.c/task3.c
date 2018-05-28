#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double fun(double x);

int main3() {
	double x, f;
	printf("x = ");
	scanf("%f", &x);
	f = fun(x);
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%f", &x);
	f = fun(x);
	printf("f(x) = %f \n", f);

	getchar();
	return 0;
}

