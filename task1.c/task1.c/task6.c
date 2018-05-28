#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern float x, f;

int main6() {

	printf("x = ");
	scanf("%lf", &x);
	fun();
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%lf", &x);
	fun();
	printf("f(x) = %f \n", f);

	getchar();
	return 0;
}