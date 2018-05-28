#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main5() {
	double x, f;
	printf("x = ");
	scanf("%lf", &x);
	fun(x, &f);
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%lf", &x);
	fun(x, &f);
	printf("f(x) = %f \n", f);

	getchar();
	return 0;
}
