#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main4() {
	double x, f;
	printf("x = ");
	scanf("%lf", &x);
	fun(x, &f);
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%lf", &x);
	fun(x, &f);
	printf("f(x) = %f \n", f);

	_getch();
	return 0;
}
